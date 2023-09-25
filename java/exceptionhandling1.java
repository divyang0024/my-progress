public class exceptionhandling1 {
    public static void main(String args[]) {
        try {
            throw new ArithmeticException("catch is invoked!!!!");
            // either make a object related to runtime excepction or let the compiler do the
            // default throw
        } catch (ArithmeticException obj) {
            System.out.println("exception encountered:" + obj.getMessage());
        }
    }
}