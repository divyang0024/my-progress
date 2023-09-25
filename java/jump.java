import java.util.Scanner;

public class jump {
    public static void main(String args[]) {
        Scanner get = new Scanner(System.in);
        System.out.print("display till n number:");
        int n, flag = 1, i = 0;
        n = get.nextInt();
        System.out.print("you have choosen " + n);
        System.out.print(" for counting");
        while (flag == 1) {
            if (i != n) {
                System.out.println(i + 1);
                ++i;
            } else {
                break;
            }
        }
        get.close();
    }
}
