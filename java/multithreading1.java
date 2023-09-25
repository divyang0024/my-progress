class multithreading1 extends Thread {
    public void run() {
        for (int i = 1; i < 5; i++) {
            // the thread will sleep for the 500 milli seconds
            try {
                Thread.sleep(500, 100);
            } catch (InterruptedException e) {
                System.out.println(e);
            }
            System.out.println(i);
        }
    }

    public static void main(String args[]) {
        multithreading1 t1 = new multithreading1();
        multithreading1 t2 = new multithreading1();

        t1.start();
        t2.start();
        
    }
}