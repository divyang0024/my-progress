public class final0 {
    static final int a;//can be intialized inside static or at the time of declartion

    static {
        a=100;
        System.out.println("static block is invoked");
    }

     public static void main(String args[]) {
        System.out.println("main function is invoked");
    
    }
}
