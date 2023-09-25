#include <iostream>
#include <conio.h>

using namespace std;

class Matrix
{
    int rows, cols, **arr; // instance variable

public:
    Matrix(int rows, int cols) // formal arguments
    {
        this->rows = rows;
        this->cols = cols;

        arr = new int *[rows];
        int i;

        for (i = 0; i < rows; i++)
        {
            arr[i] = new int[cols];
        }
    }
    void Input()
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << "Enter element " << i << j << endl;

                cin >> arr[i][j];
            }
        }
        Display();
    }

private:
    void Display()
    {
        cout << endl
             << "Matrix : " << endl;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int row, col;

    cout << "Enter number of rows and column" << endl;
    cin >> row >> col;

    Matrix *obj; // reference variable

    obj = new Matrix(row, col);
    obj->Input();

    getch();
    return 0;
}