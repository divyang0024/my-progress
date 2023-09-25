import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;

public class filehandling0 {
    public static void main(String args[]) throws IOException {

        FileOutputStream fout = new FileOutputStream("C:\\Users\\divayng\\Desktop\\work files\\java\\fh\\file3.txt");
        String st = "this is file output stream example.";
        char ch[] = st.toCharArray();
        for (int i = 0; i < st.length(); i++)
            fout.write(ch[i]);
        fout.close();
        FileInputStream fin = new FileInputStream("C:\\Users\\divayng\\Desktop\\work files\\java\\fh\\file3.txt");
        int c = 'a';
        System.out.println(c);
        do {
            c = fin.read();
            System.out.print(c + " for ");
            System.out.print((char) c + " , ");
        } while (c != -1);
        fin.close();
    }
}