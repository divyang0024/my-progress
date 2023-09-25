interface I {
    void check();
}

abstract class B {
    int s=10;
    B(B obj) {
     
    }
}

class A extends B implements I {
    int b;
    public void check() {
        System.out.println("Class A check function");
    }
    
}

public class practice10 {
    public static void main(String args[]) {
        I i1 = new A();
        i1.check();
    }
}