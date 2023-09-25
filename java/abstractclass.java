abstract class A {
    abstract void display();

    abstract void display1();
}

class B extends A {
    void display() {
        System.out.println("display funtion is invoked!!!!");
    }

    void display1() {
        System.out.println("display funtion1 is invoked!!!!");
    }
}

public class abstractclass {
    public static void main(String args[]) {
        A obj = new B();
        obj.display();
        obj.display1();
    }
}
