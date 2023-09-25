import java.awt.*;
import java.awt.event.*;

public class frame3 extends Frame
        implements ItemListener, KeyListener, ActionListener, MouseListener, MouseMotionListener {

    Label l;
    Button b = new Button("X");

    frame3() {

        CheckboxGroup cbg = new CheckboxGroup();
        Checkbox male = new Checkbox("male", cbg, false);
        Checkbox female = new Checkbox("female", cbg, false);
        male.setBounds(50, 50, 100, 100);
        female.setBounds(50, 150, 100, 100);
        add(male);
        add(female);
        TextArea ta = new TextArea();
        ta.setBounds(300, 50, 180, 300);
        l = new Label();
        l.setBounds(50, 320, 200, 50);
        add(l);
        add(ta);
        b.setBounds(50, 450, 200, 50);
        b.setSize(100, 50);
        b.setBackground(Color.red);
        b.setForeground(Color.yellow);
        add(b);

        b.addActionListener(this);
        b.addMouseListener(this);
        ta.addKeyListener(this);
        male.addItemListener(this);
        female.addItemListener(this);
        addMouseMotionListener(this);
        setTitle("event handling");
        setForeground(Color.red);
        setBackground(Color.blue);
        setSize(500, 500);
        setLayout(new BorderLayout(12, 23));
        setVisible(true);
    }

    public void itemStateChanged(ItemEvent e) {
        l.setText("your gender is " + e.getItem());
        if (e.getItem() == "male") {
            l.setBackground(Color.cyan);
        } else
            l.setBackground(Color.pink);
    }

    public void keyTyped(KeyEvent e) {
        l.setText("key is typed");
        l.setBackground(Color.darkGray);
    }

    public void keyPressed(KeyEvent e) {
        l.setText("key is pressed");
        l.setBackground(Color.white);
    }

    public void keyReleased(KeyEvent e) {
        l.setText("key is released");
        l.setBackground(Color.green);
    }

    public void actionPerformed(ActionEvent e) {
        dispose();
    }

    public void mouseClicked(java.awt.event.MouseEvent e) {

    }

    public void mousePressed(java.awt.event.MouseEvent e) {
    }

    public void mouseReleased(java.awt.event.MouseEvent e) {

    }

    public void mouseEntered(java.awt.event.MouseEvent e) {
        l.setBackground(Color.red);
        l.setForeground(Color.yellow);
        l.setText("do you want to close the window!!!!");
        for (int i = 50; i <= 100; i++) {
            l.setSize(i * 2, i);
        }
    }

    public void mouseDragged(MouseEvent e) {
        Graphics g = getGraphics();
        int i;
        for (i = 0; i <= 360; i++) {
            g.setColor(Color.magenta);
            g.fillArc(e.getX(), e.getY(), 100, 100, i, i);
            g.setColor(Color.pink);
            g.fillArc(e.getX(), e.getY(), 98, 98, i, i);
            g.setColor(Color.cyan);
            g.fillArc(e.getX(), e.getY(), 96, 96, i, i);
            g.setColor(Color.green);
            g.fillArc(e.getX(), e.getY(), 94, 94, i, i);
            g.setColor(Color.yellow);
            g.fillArc(e.getX(), e.getY(), 92, 92, i, i);
            g.setColor(Color.orange);
            g.fillArc(e.getX(), e.getY(), 90, 90, i, i);
            g.setColor(Color.red);
            g.fillArc(e.getX(), e.getY(), 88, 88, i, i);
        }
    }

    public void mouseMoved(MouseEvent e) {
        Graphics g = getGraphics();
        l.setText("X : " + e.getX() + "  y : " + e.getY());
        g.setColor(Color.blue);
        g.fillRoundRect(e.getX(), e.getY(), 100, 100, 20, 20);
    }

    public void mouseExited(java.awt.event.MouseEvent e) {
        l.setText("");
        for (int i = 100; i >= 50; i--) {
            l.setSize(i * 2, i);
            l.setBackground(Color.red);
        }
    }

    public static void main(String args[]) {
        new frame3();
    }

}