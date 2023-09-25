abstract class a {
    abstract void check();
}

 abstract class b extends a {

}

class c extends b {//if b class overide the abstract method of a then c will not need to overide a.
    void check(){

    }
}

public class practice3 {
    public static void main(String args[]) {
    }
}
