#include <iostream>
using namespace std;
class base
{
private:
	int a, b;

public:
	base(int a = 0, int b = 0)
	{
		this->a = a;
		this->b = b;
	}
	friend int sum(int, int);
};

int sum(int a, int b)
{
	base obj(a, b);
	return obj.a + obj.b;
}
int main()
{
	cout << sum(12, 6);
}
