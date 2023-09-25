import java.util.Scanner;

class Identity {
    String name;
    int age;
    String gender;

    void setdata(String name, String gender, int age, int count) {
        System.out.println("the detail of " + count + " person is: \n");
        this.name = name;
        this.age = age;
        this.gender = gender;
        System.out.println("your name is: " + name);
        System.out.println("\nyour age is: " + age);
        System.out.println("\nyour gender is: " + gender);
        System.out.println("\n<------------------------>");
        ++count;
    }
}

public class objectandclass {
    public static void main(String args[]) {
        int nop;
        int choice;
        Scanner get = new Scanner(System.in);
        System.out.print("please enter number of person:");
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
                new Identity().setdata(name, gender, age, i + 1);
            }
            System.out.println("enter choice:\nif exit press 1\notherwise press 0");
            choice = get.nextInt();
        } while (choice == 1);
        get.close();
    }
}