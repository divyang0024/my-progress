import java.awt.*;

//way to Flow Layout
public class layoutmanager2 extends Frame {
    layoutmanager2() {
        Button tf1 = new Button("button 1");
        Button tf2 = new Button("button 2");
        Button tf3 = new Button("button 3");
        Button tf4 = new Button("button 4");
        Button tf5 = new Button("button 5");
        Button tf6 = new Button("button 6");
        setLayout(new FlowLayout(FlowLayout.TRAILING, 50, 50));
        add(tf1);
        add(tf2);
        add(tf3);
        add(tf4);
        add(tf5);
        add(tf6);
        setSize(500, 500);
        setVisible(true);
    }

    public static void main(String args[]) {
        new layoutmanager2();
    }
}
