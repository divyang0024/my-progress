public class practice6 {
        public static void main(String args[]) {
                try {
                        throw new ArithmeticException("runtime exception encounterd!!!!");
                } // if written inside try catch is important to be used.
                catch (NullPointerException npeo) {
                        System.out.println("exception encountered");
                }
        }
}
