import java.io.*;
import java.util.Scanner;

public class filehandling2 {
    public static void main(String args[]) throws IOException {
        File f1 = new File("C:\\Users\\divayng\\Desktop\\work files\\java\\fh\\file3.txt");
        BufferedOutputStream fout = new BufferedOutputStream(
                new FileOutputStream(f1), 45);
        FileOutputStream fout2 = new FileOutputStream(f1);
        System.out.println("perform buffered output operation: ");
        Scanner get = new Scanner(System.in);
        String st;
        int ch;
        st = get.nextLine();
        byte b[] = st.getBytes();
        // fout.write(b);
        fout2.write(b);
        System.out.println("perform buffered input operation: ");
        BufferedInputStream fin = new BufferedInputStream(new FileInputStream(f1));
        while ((ch = fin.read()) != -1) {
            System.out.print((char) ch);
        }
        fin.close();
        get.close();
        fout.close();
        fout2.close();
    }
}