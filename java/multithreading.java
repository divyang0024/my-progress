class A implements Runnable {
    public void run() {
        int i;
        for (i = 1; i <= 10; i++) {
            System.out.println("thread A: " + i);
        }
    }
}

class B implements Runnable {
    public void run() {
        int i;
        for (i = 1; i <= 10; i++) {
            System.out.println("thread B: " + i);
        }
    }
}

class multithreading {
    public static void main(String args[]) {
        // Runnable i1 = new A();
        // Runnable i2 = new B();also applicable
        Thread t1 = new Thread(new A());
        Thread t2 = new Thread(new B());
        t1.start();
        t2.start();
    }
}