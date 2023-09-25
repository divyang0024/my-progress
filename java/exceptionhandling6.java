import java.io.IOException;

public class exceptionhandling6 {
    void fun1() throws IOException {
        System.out.println("inside fun1");
        throw new IOException("i/o exception is handled in propogation chain with the help of throws");
    }

    void fun2() throws IOException {
        fun1();
        System.out.println("inside fun2");
    }

    void fun3() throws IOException {
        fun2();
        System.out.println("inside fun3");
    }

    void check() {
        fun3();
    }

    

    public static void main(String args[]) {
        exceptionhandling6 obj = new exceptionhandling6();
        obj.check();
    }
}