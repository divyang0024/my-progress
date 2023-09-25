public class practice5 {
    int x[] = new int[5];

    void check() {
        x[5] = 100;// it will throw array out of bound exception.
    }

    public static void main(String args[]) {
        practice5 obj = new practice5();
        obj.check();
        System.out.println("" + obj.x[4]);
    }
}
