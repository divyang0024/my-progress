import java.util.Scanner;

class a {
    int var;

    static Scanner get = new Scanner(System.in);

    void fun0() {
        System.out.println("the funtion of class a was called!!!!");
    }

    a() {
        System.out.println("------------->constuctor block of class a<------------");
        System.out.print("the value of varible of class a: ");
        System.out.println(var);
    }// a class default constuctor

    {
        System.out.println("------------->intializer block of class a<------------");
        System.out.print("enter the value of variable of class a: ");
        var = get.nextInt();
    }// intializer block of a
}

class b extends a {
    int var1;

    void fun0() {
        System.out.println("the funtion of class b was called!!!!");
    }

    b() {
        System.out.println("------------->constuctor block of class b<------------");
        System.out.print("the value of varible of class b: ");
        System.out.println(var1);
    }// b class default constuctor

    {
        System.out.println("------------->intializer block of class b<------------");
        System.out.print("enter the value of variable of class b: ");
        var1 = get.nextInt();
    }// intialzer block of b
}

class c extends b {
    int var2;

    void fun0() {
        System.out.println("the funtion of class c was called!!!!");
    }

    c() {
        System.out.println("------------->constuctor block of class c<------------");
        System.out.print("the value of varible of class c: ");
        System.out.println(var2);
    }// c class default constuctor

    {
        System.out.println("------------->intializer block of class c<------------");
        System.out.print("enter the value of variable of class c: ");
        var2 = get.nextInt();
        get.close();
    }// intialzer block of c
}

public class intializerblock {
    public static void main(String args[]) {
        c instance = new c();
        instance.var2 = a.get.nextInt();
    }
}