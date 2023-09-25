public class methodoverloading {
    void fun(int a, int b) {
        System.out.println("function with two argument was invoked!!!!.\n");
    }

    void fun(int a, int b, int c) {
        System.out.println("function with three argument was invoked!!!!.\n");
    }

    public static void main(String args[]) {
        methodoverloading obj = new methodoverloading();
        obj.fun(12, 23);
        obj.fun(12, 23, 45);
    }
}
