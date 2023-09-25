public class unarydiop {
    public static void main(String args[]) {
        int a = 12;
        int b = -10;
        boolean c = true;
        boolean d = false;
        System.out.println(++a);// it is pre-increment,the value will be 13
        System.out.println(--a);// it is pre-decrement,the value will be 12
        System.out.println(a++);// it is post-increment,the value will be 12
        System.out.println(a--);// it is post-decrement,the value will be 13
        System.out.println(a);// the value will be 12
        System.out.println(-a - (a));// the value is -24
        System.out.println(~a);//-13
        System.out.println(~b);//9
        System.out.println(!c);// false (opposite of boolean value)
        System.out.println(!d);// true
    }
}