class a {
    int x;
    int a, b, c;

    void display() {
        System.out.println("class a funtion was invoked!!!!");
    }

    void check() {
        System.out.println("check function was called!!!!");
    }
}

class b extends a {
    int y;

    void display() {
        System.out.println("class b funtion was invoked!!!! " + x);
    }
}

public class practice1 {
    public static void main(String args[]) {
        a obj = new b();
        obj.x = 12;
        obj.check();
        obj.display();
        System.out.println(obj instanceof b);
    }
}
