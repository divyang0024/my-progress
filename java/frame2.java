import java.awt.*;
import java.awt.event.*;

class frame2
        extends Frame implements ActionListener, MouseListener {
    TextField tf;

    frame2() {
        // create components
        tf = new TextField();
        tf.setBounds(60, 50, 170, 20);
        Button b = new Button("CLICK");
        b.setBounds(100, 120, 80, 30);

        // register listener
        System.out.println("this is before the event is registered");
        b.addActionListener(this);// passing current instance
        b.addMouseListener(this);
        System.out.println("this is after the event is registered");
        // add components and set size, layout and visibility
        add(b);
        add(tf);
        setSize(300, 300);
        setLayout(new BorderLayout(12, 34));
        setVisible(true);
    }

    public void actionPerformed(ActionEvent e) {
        tf.setBackground(Color.red);
        String str = e.getActionCommand();
        tf.setText(str);
    }

    @Override
    public void mouseEntered(java.awt.event.MouseEvent e) {
        tf.setBackground(Color.red);
    }

    public void mouseClicked(MouseEvent e) {
        tf.setBackground(Color.YELLOW);
    }

    @Override
    public void mousePressed(java.awt.event.MouseEvent e) {
        tf.setBackground(Color.magenta);
    }

    @Override
    public void mouseReleased(java.awt.event.MouseEvent e) {
        tf.setBackground(Color.pink);

    }

    public void mouseExited(java.awt.event.MouseEvent e) {
        tf.setBackground(Color.orange);

    }

    public static void main(String args[]) {
        new frame2();
    }

}