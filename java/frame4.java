import java.awt.*;
import java.awt.event.*;

public class frame4 extends Frame implements MouseMotionListener {
    Frame f = new Frame();

    frame4() {
        addMouseMotionListener(this);
        f.setSize(500, 500);
        setLayout(null);
        setVisible(true);
    }

    public void mouseDragged(MouseEvent e) {
        Graphics g = getGraphics();
        g.setColor(Color.blue);
        g.fillOval(e.getX(), e.getY(), 20, 20);
    }

    public void mouseMoved(MouseEvent e) {

    }

    public static void main(String args[]) {
        new frame4();
    }
}
