public class exceptionhandling2 {
    public static void main(String args[]) {

        try {
            throw new ArithmeticException();
        } catch (Exception obj) {
            System.out.println("exception caught!!!!");
        }
        }
}