interface i1 {
    void check1();

    void check();
}

interface i2 {
    void check2();

    void check();
}

interface i3 extends i1, i2 {
    void check3(int a, int b);

    void check();
}

class A implements i3 {
    int a = 12;

    public void check() {
        System.out.println("");
    }

    public void check1() {
        System.out.println("1");
    }

    public void check2() {
        System.out.println("2");
    }

    public void check3(int a, int b) {
        System.out.println("3");
    }
}

public class interface0 {
    public static void main(String args[]) {
        A obj = new A();
        obj.check3(12, 23);
    }
}
