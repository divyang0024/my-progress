class a {

}

class b extends a {
    int q;
}

public class practice0 {
    public static void main(String args[]) {
        a obj = new b();// upcasting
        System.out.println(obj instanceof b);
        //b obj1 = (b) new a();still wrong
        System.out.println(obj instanceof a);
    }
}
