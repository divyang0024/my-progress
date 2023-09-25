import java.awt.*;

public class frame1 extends Frame {
    frame1() {
        Frame F = new Frame();
        Label l = new Label("name");
        Label l1 = new Label("select your gender:");
        TextField tf = new TextField();
        Button b = new Button("submit");
        Checkbox male = new Checkbox("male", null, false);
        Checkbox female = new Checkbox("female", null, false);
        setSize(500, 500);
        l.setBounds(22, 60, 100, 100);
        tf.setBounds(100, 60, 100, 10);
        l1.setBounds(210, 80, 100, 10);
        l1.setBounds(222, 80, 100, 10);
        male.setBounds(80, 100, 50, 50);
        female.setBounds(80, 120, 50, 50);
        add(l);
        add(l1);
        add(tf);
        add(b);
        F.add(male);
        F.add(female);
        setLayout(null);
        setSize(400, 400);
        male.setVisible(true);
        setVisible(true);
    }

    public static void main(String args[]) {
        frame1 obj = new frame1();
    }
}