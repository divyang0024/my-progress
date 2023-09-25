class A extends Thread {
    public void run() {
        for (int i = 1; i <= 5; i++) {
            try {
                Thread.sleep(500);
            } catch (InterruptedException e) {
                System.out.println(e.getMessage());
            }
            System.out.println("thread A: " + i);
        }
    }
}

class B extends Thread {
    public void run() {
        for (int i = 1; i <= 5; i++) {
            try {
                Thread.sleep(500);
            } catch (InterruptedException e) {
                System.out.println(e.getMessage());
            }
            System.out.println("thread B: " + i);
        }
    }
}

public class multithreading2 {
    public static void main(String args[]) {
        A t1 = new A();
        A t2 = new A();
        B t3 = new B();
        t1.start();
        t2.start();
        t3.start();
    }
}