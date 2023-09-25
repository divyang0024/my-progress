interface i1 {
    void check();
}

interface i2 extends i1 {
    void check1();
}

abstract class a implements i2 {
}

class b extends a {
    public void check() {
        System.out.println("the check function was invoked!!!!");
    }

    public void check1() {
        System.out.println("the check");
    }
}

class interface1 {
    public static void main(String args[]) {
        i2 obj = new b();
        obj.check();// can extend because i2 extends i1
    }
}