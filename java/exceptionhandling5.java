import java.io.IOException;

public class exceptionhandling5 {
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
        try {
            fun3();
        } catch (IOException iobj) {
            System.out.println("" + iobj.getMessage());
        }
    }

    public static void main(String args[]) {
        exceptionhandling5 obj = new exceptionhandling5();
        obj.check();
    }
}