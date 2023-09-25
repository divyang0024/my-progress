
/*
 * canWrite/Read();:-tells wheather the file is readble or writable or both.
 * length();:-identify the size of file.
 * delete();:-delete the file if it exists.
 * all of these method can be used by "File" class.
 */
import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;

public class filehandling {
    public static void main(String args[]) throws IOException {
        try {
            File f1 = new File("C:\\Users\\divayng\\Desktop\\work files\\java\\fh\\file4.txt");
            try {
                if (f1.exists()) {
                    System.out.println(f1.getName() + " exists!!!!");
                } else
                    throw new IOException();
            } catch (IOException obj) {
                System.out.println("creating a file of name " + f1.getName());
                f1.createNewFile();
                System.out.print("checking wheather the file has been creted or not: ");
                System.out.println(f1.exists());
            }
        } finally {
            System.out.println("file handling is done successfully");
            File f2 = new File("C:\\Users\\divayng\\Desktop\\work files\\java\\fh\\file3.txt");
            System.out.println(f2.exists());
            System.out.println(f2.canRead());
            System.out.println(f2.canWrite());
            FileOutputStream fout = new FileOutputStream(f2, true);
            String st = "the file has been appended.";
            char ch = 'A';
            fout.write(ch);
            fout.close();
        }
    }
}