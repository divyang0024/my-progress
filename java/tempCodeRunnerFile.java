import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class swings0 extends JFrame {
    JLabel l = new JLabel("label 1", 10);
    JButton b = new JButton(new ImageIcon("C:\\Users\\divayng\\Downloads\\download.jpg"));
    JCheckBox cb1 = new JCheckBox("box 1", null, false);
    JCheckBox cb2 = new JCheckBox("box 2", null, false);
    JCheckBox cb3 = new JCheckBox("box 3", null, false);
    ButtonGroup rg = new ButtonGroup();
    JRadioButton r1 = new JRadioButton("option 1");
    JRadioButton r2 = new JRadioButton("option 2");

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
        add(cb1);
        add(cb2);
        add(cb3);
        add(b);
        add(l);
        add(passwd);
        rg.add(r1);
        rg.add(r2);
        setLayout(new GridLayout(5, 10, 40, 40));
        setVisible(true);
    }

    public static void main(String args[]) {
        swings0 obj = new swings0();
    }

}