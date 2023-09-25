class a {
    void display() {
        System.out.println(" A class display function was called!!!!");
    }
}

class b extends a {
    void display() {
        System.out.println("B class function was called");
    }
}

public class runtimepoly {
    public static void main(String args[]) {
        a obj = new b();
        obj.display();
    }
}