import java.util.Scanner;

class Identity {
    String name;
    int age;
    String gender;
    int check;

    Identity(String name, int age, String gender, int check)// cant use default parmeter
    {
        this.name = name;
        this.age = age;
        this.gender = gender;
        System.out.println("your name is: " + name);
        System.out.println("\nyour age is: " + age);
        System.out.println("\nyour gender is: " + gender);
        System.out.println("check= " + check);
        System.out.println("\n<------------------------>");
    }

    Identity(String name, int age, String gender)// cant use default parmeter
    {
        this.name = name;
        this.age = age;
        this.gender = gender;
        System.out.println("your name is: " + name);
        System.out.println("\nyour age is: " + age);
        System.out.println("\nyour gender is: " + gender);
        System.out.println("\n<------------------------>");
    }
}

public class constructor {
    public static void main(String args[]) {
        int nop;
        int choice;
        Scanner get = new Scanner(System.in);
        System.out.print("please enter number of person:");
        int j;
        nop = get.nextInt();
        do {
            for (int i = 0; i < nop; i++) {
                int age;
                String name;
                String gender;
                System.out.println("please enter your age: ");
                age = get.nextInt();
                System.out.println("please enter your name: ");
                name = get.next();
                System.out.println("please enter your gender: ");
                gender = get.next();
                j = get.nextInt();
                if (j == 1) {
                    new Identity(name, age, gender, 1);
                } else {
                    new Identity(name, age, gender);
                }
            }
            System.out.println("enter choice:\nif exit press 0\notherwise press 1");
            choice = get.nextInt();
        } while (choice == 1);
        get.close();
    }

}
