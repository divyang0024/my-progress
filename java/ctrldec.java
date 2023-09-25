import java.util.Scanner;

public class ctrldec {
    public static void main(String args[]) {
        Scanner s = new Scanner(System.in);
        int age;
        char again;
        do {
            System.out.print(
                    "enter your age to get genre suggestion but if your age fall below 18 you wont be getting suggestion: ");
            age = s.nextInt();
            if (age >= 18 && age <= 40) {
                System.out.print("you must try genre like thriller,horror,suspense and drama,give it shot!!!!");
            } else if (age > 40)
                System.out.print("try genre like biography,devotion,give it shot!!");
            else
                System.out.println("you are not eligible");

            System.out.print(
                    "\nif you want to try this application again, then please enter y to accept or press a random key to reject: ");
            again = s.next().charAt(0);
        } while (again == 'y' || again == 'Y');
        s.close();
    }
}
