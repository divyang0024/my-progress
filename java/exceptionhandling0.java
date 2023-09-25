public class exceptionhandling0 {
    public static void main(String args[]) {
        int x;
        try {
            System.out.println("inside the try block");
            x = 5 / 0;
        } catch (NullPointerException nobj) {
            System.out.println("" + nobj.getMessage());
        } finally {
            System.out.println("inside the finally block");// finally will still run in the case of default catch
                                                           // mechanism
        }
        System.out.println("inside the class main function");
    }
}