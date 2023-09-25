public class practice9 {
    void fun() {
        System.out.println("inside of function");
        fun1();
    }

    void fun1() {
        System.out.println("inside of function1");
    }

    public static void main(String args[]) {
        new practice9().fun();
        int a=10;
        System.out.println(a);
    }
}
