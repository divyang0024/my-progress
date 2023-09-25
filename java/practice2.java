class check {
 
}

abstract class a extends check {
    int x;
}

class b extends a {
    int y;
}

public class practice2 {
    public static void main(String args[]) {
        a obj = new b();
        obj.x = 23;
    }
}