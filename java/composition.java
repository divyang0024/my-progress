import java.util.Scanner;

class animals {
    public String habit;
    public String sound;

    public void foodsound(String aname, String habit, String sound) {
        System.out.print(aname + " is " + habit + " type and makes " + sound + " sound.");
    }
}

class dog extends animals {
}

class duck extends animals {
}

class cat extends animals {
}

class frog extends animals {
}

class composition {
    public static void main(String args[]) {
        String choice;
        String habit;
        String sound;
        Scanner get = new Scanner(System.in);
        System.out.print("enter your choice:");
        choice = get.next();
        System.out.print("enter food habit of " + choice + ": ");
        habit = get.next();
        System.out.print("enter the sound " + choice + " make: ");
        sound = get.next();
        switch (choice) {
            case "dog": {
                dog husky = new dog();
                husky.foodsound(choice, habit, sound);
                break;
            }
            case "cat": {
                cat spinxcat = new cat();
                spinxcat.foodsound(choice, habit, sound);
                break;
            }
            case "frog": {
                frog woodfrog = new frog();
                woodfrog.foodsound(choice, habit, sound);
                break;
            }
            case "duck": {
                duck mallard = new duck();
                mallard.foodsound(choice, habit, sound);
                break;
            }
            default:
                System.out.println("wrong choice!!!!");
        }
        System.out.println("\n");
        for (int i = 0; i < choice.length(); i++) {
            System.out.println(choice.charAt(i));
        }
        get.close();
    }
}