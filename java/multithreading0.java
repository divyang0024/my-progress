class A extends Thread {
    public void run() {
        int i;
        for (i = 1; i <= 5; i++) {
            System.out.println("inside A class: ");
        }
    }
}

class B extends Thread {
    public void run() {
        int i;
        for (i = 1; i <= 5; i++) {
            System.out.println("inside B class: ");
        }
    }
}

public class multithreading0 {
    public static void main(String args[]) {
        A thread1 = new A();
        B thread2 = new B();
        // Thread thread1 = new A();
        // Thread thread2 = new B();also applicable
        thread1.start();// Class A can use thread class start()since it inherits class Thread
        thread2.start();// Same goes for b Class
    }
}