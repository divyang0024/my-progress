class Check extends Thread {
    public void run() {
        this.setName("thread 1");
        System.out.println(this.getName());
    }
}

public class mutithreading4 {
    public static void main(String args[]) {
        Check t1 = new Check();
        t1.start();
    }
}