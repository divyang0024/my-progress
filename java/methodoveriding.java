class a {
    a fun() {
        System.out.println("parent class a is called!!!!");
        return this;
    }
}

class b extends a {
    b fun() {
        System.out.println("child class b is called!!!!");
        return this;
    }

    void check() {
        System.out.println("check function was called!!!!");
    }

    void check1() {
        System.out.println("check1 function was called!!!!");
    }
}

public class methodoveriding {
    public static void main(String args[]) {
        b obj = new b();
        obj.fun();
        new b().fun().check();
        new a().fun();
    }
}
