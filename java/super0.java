class a {
    a() {
        System.out.println("a class constructor was called!!!!");
    }

    void fun1() {
        System.out.println("function1 was called!!!!");
    }

    {
        System.out.println("inside class a:");
    }
}

class b extends a {
    {
        System.out.println("inside class b:");
    }

    b() {
        super();
        System.out.println("b class constructor was called!!!!");
    }

    void fun2() {
        System.out.println("function2 was called!!!!");
        super.fun1();
    }
}

public class super0 {
    public static void main(String args[]) {
        new b().fun2();
    }
}
