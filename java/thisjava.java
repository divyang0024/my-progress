public class thisjava {
    thisjava() {
        this.fun();
    }

    void fun() {
        System.out.println("function was invoked");
    }

    public static void main(String args[]) {
        thisjava obj = new thisjava();
        obj.fun();
    }
}
