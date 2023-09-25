#include <conio.h>
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

class Student
{
    fstream obj;
    char arr[10000];

public:
    void WriteInFile()
    {
        obj.open("D:\\PD_Data\\C++PPT\\C++LabSolution\\Demo341.txt", ios::out);
        int i = 0;
        while (arr[i] != '\0')
        {
            obj.put(arr[i]);
            i++;
        }
        obj.close();
    }
    void ReadFromFile()
    {
        int i = 0, index = 0;
        char line[80];
        obj.open("C:\\Users\\DIVYANG\\OneDrive\\Desktop\\hello.txt", ios::in);
        while (obj.eof() != 1)
        {
            obj.getline(line, 80);
            for (i = 0; i < strlen(line); i++)
            {
                arr[index++] = line[i];
            }
            arr[index] = '\0';
        }
        obj.close();
    }
};
int main()
{
    cout << "divyang\n";
    Student objS;
    objS.ReadFromFile();
    objS.WriteInFile();
    getch();
    return 0;
}