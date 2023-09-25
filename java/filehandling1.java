import java.io.IOException;
import java.io.FileWriter;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileReader;
import java.util.Scanner;

public class filehandling1 {
    public static void main(String args[]) throws IOException {
        File f1 = new File("C:\\Users\\divayng\\Desktop\\work files\\java\\fh\\file3.txt");
        BufferedWriter fout = new BufferedWriter(new FileWriter(f1,true));
        Scanner get = new Scanner(System.in);
        String st;
        int ch;
        st = get.nextLine();
        fout.write(st);
        get.close();
        fout.close();
        BufferedReader fin = new BufferedReader(new FileReader(f1));
        while ((ch = fin.read()) != -1) {
            System.out.print((char) ch);
        }
        fin.close();
    }
}