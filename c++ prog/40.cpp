#include <iostream>
using namespace std;
template <typename T>
class Stack
{
	T arr[10];
	int top;

public:
	Stack()
	{
		top = -1;
	}
	void push(T data)
	{
		try
		{

			if (top == 9)
				throw "Stack is full";

			else
			{
				top++;
				arr[top] = data;
			}
		}
		catch (const char *p)
		{
			cout << "\n"
				 << p << endl;
		}
	}
	T pop()
	{
		if (top = -1)
		{
			cout << "\nStack already empty:" << endl;
		}
		else
			return arr[top--];
	}
	bool isempty()
	{
		if (top = -1)
			return true;
		else
			return false;
	}
};

int main()
{
	Stack<int> S1;
	Stack<float> S2;
	Stack<char> S3;
	cout << "\nEnter integers to push in stack:\n";
	int data;
	for (int i = 0; i <= 10; i++)
	{
		cin >> data;
		S1.push(data);
	}
	if (S2.isempty())
		cout << "Stack 2 is empty:";
}
