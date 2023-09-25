import java.awt.*;

public class frame0 extends Frame {
    frame0() {
        Button b = new Button("click here");
        add(b);// add the button inside the frame
        b.setBounds(30, 30, 100, 100);
        setSize(500, 500);
        setLayout(null);
        setVisible(true);
    }

    public static void main(String args[]) {
        frame0 obj = new frame0();
    }
}