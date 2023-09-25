abstract class A {
    void check() {
        System.out.println("check function was called");
    }

    void check1() {
        System.out.println("check function1 was called");
    }
}

public class practice11 extends A {

    public static void main(String args[]) {
        A obj = new practice11();
        obj.check();
        obj.check1();
    }
}