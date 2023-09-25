public class PrivateConstructorDemo {
    // creating an instance variable of the class Tester
    private static PrivateConstructorDemo pcd;

    // creating a private constructor
    private PrivateConstructorDemo() {
    }

    // creating a static method named getInstance()
    public static PrivateConstructorDemo getInstance() {
        if (pcd == null) {
            // creating a constructor of the class
            pcd = new PrivateConstructorDemo();
            System.out.println("method called");
        }
        return pcd;
    }

    // main() method
    public static void main(String args[]) {
        PrivateConstructorDemo pcd = PrivateConstructorDemo.getInstance();
        PrivateConstructorDemo pcd1 = PrivateConstructorDemo.getInstance();
        // invokes the getInstance() method and prints the corresponding result
        System.out.println(pcd.equals(pcd1));
    }
}
