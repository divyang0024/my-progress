class A extends Thread {
    static int a = 5;

    void check(int c) {
        System.out.println(c);
    }

    public void run() {
        int c = 2;
        a = a - c;
        System.out.println(a);
    }
}

public class multithreading3 {
    public static void main(String args[]) {
        A t1 = new A();
        A t2 = new A();
        t1.start();
        t2.start();
    }
}