import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class swings0 extends JFrame {
    JLabel l = new JLabel("label 1", 10);
    JButton b = new JButton(new ImageIcon(
            "C:\\Users\\divayng\\Downloads\\120-1205004_white-button-png-transparent-glass-rectangle-png-png.png"));
    JCheckBox cb1 = new JCheckBox("box 1", null, false);
    JCheckBox cb2 = new JCheckBox("box 2", null, false);
    JCheckBox cb3 = new JCheckBox("box 3", null, false);
    ButtonGroup rg;
    JRadioButton r1 = new JRadioButton("option 1", false);
    JRadioButton r2 = new JRadioButton("option 2", false);
    String options[] = { "option1", "option2", "option3", "option4", "option5" };
    JComboBox cobo = new JComboBox(options);
    String heading[] = { "heading1", "heading2", "heading3" };
    String data[][] = { { "r1c1", "r1c2", "r1c3" }, { "r2c1", "r2c2", "r2c3" }, { "r3c1", "r3c2", "r3c3" } };
    JTable t = new JTable(data, heading);
    JList li = new JList(options);

    swings0() {
        setSize(500, 500);
        b.setBounds(230, 250, 100, 30);
        b.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent e) {
                // also applicable in this way we dont have to write the handler line seprately
                l.setIcon(b.getIcon());
            }
        });
        l.setBounds(250, 150, 100, 50);
        JPasswordField passwd = new JPasswordField();
        passwd.setEchoChar('*');
        b.setSize(250, 50);
        add(cb1);
        add(cb2);
        add(cb3);
        add(b);
        add(l);
        add(passwd);
        add(cobo);
        rg = new ButtonGroup();
        rg.add(r1);
        rg.add(r2);
        add(r1);
        add(r2);
        add(t);
        add(li);
        setLayout(new GridLayout(5, 10, 40, 40));
        setVisible(true);
    }

    public static void main(String args[]) {
        swings0 obj = new swings0();
    }

}