public class exceptionhandling {
    public static void main(String args[]) {
        int x;
        try {
            System.out.println("inside the try block");
            x = 5 / 0;
        } catch (ArithmeticException robj) {
            System.out.println("inside catch block");
            System.out.println("exception encountered:" + robj.getMessage());
        } catch (NullPointerException nobj) {
            System.out.println("" + nobj.getMessage());
        } finally {
            System.out.println("inside the finally block");
        }
        System.out.println("inside the class main function");
    }
}