public class practice8 {
    public static void main(String args[]) {
        try {
            int c = 5 / 0;// cant make this without a try block
        } catch (ArithmeticException obj) {
            System.out.println("exception encountered");
        }
    }
}