public class practice7 {
    void fun1() {
        System.out.println("inside fun1");
    }

    void fun2() {
        fun1();
        System.out.println("inside fun2");
    }

    void fun3() {
        fun2();
        System.out.println("inside fun3");
    }

    public static void main(String args[]) {
        practice7 obj = new practice7();
        obj.fun3();
    }
}