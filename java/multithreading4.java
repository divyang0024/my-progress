import java.util.Scanner;

class Account {
    private int bal;

    public Account(int bal) {
        this.bal = bal;
    }

    public Boolean issuffbal(int w) {
        if (bal >= w)
            return (true);
        else
            return (false);
    }
    public void withdraw(int amt) {
        bal = bal - amt;
        System.out.println("withdrawl money is" + amt);
        System.out.println("your curreant balance is " + bal);
    }
}

class Customer implements Runnable {
    private Account account;

    public Customer(Account account) {
        this.account = account;
    }

    public void run() {
        Scanner get = new Scanner(System.in);
        System.out.println("enter amount to withdraw: ");
        int amt = get.nextInt();
        synchronized (account) {
            if (account.issuffbal(amt)) {
                account.withdraw(amt);
            } else
                System.out.println("insuffcient balance!!!!");
        }
    }
}

public class multithreading4 {
    public static void main(String args[]) {
        Account a1 = new Account(1000);
        Customer c1 = new Customer(a1), c2 = new Customer(a1);
        Thread t1 = new Thread(c1);
        Thread t2 = new Thread(c2);
        t1.start();
        t2.start();
    }
}
