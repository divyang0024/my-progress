import java.awt.*;

public class layoutmanager extends Frame {
    layoutmanager() {
        //way to use border layout
        Frame f = new Frame();
        Button b1 = new Button("b1");
        Button b2 = new Button("b2");
        Button b3 = new Button("b3");
        Button b4 = new Button("b4");
        Button b5 = new Button("b5");
        f.setLayout(new BorderLayout(25, 50));
        f.add(b1, BorderLayout.NORTH);
        f.add(b2, BorderLayout.EAST);
        f.add(b3, BorderLayout.SOUTH);
        f.add(b4, BorderLayout.WEST);
        f.add(b5, BorderLayout.CENTER);

        f.setSize(500, 500);
        f.setVisible(true);
    }

    public static void main(String args[]) {
        new layoutmanager();
    }
}
