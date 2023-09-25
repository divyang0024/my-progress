#include <iostream>
#include <string>
using namespace std;
class product
{
protected:
	string product_name;
	int price;
	int id;

public:
	product()
	{
		product_name = "";
		price = 0;
		id = 0;
	}
	product(string pname, int price, int id)
	{
		product_name = pname;
		this->price = price;
		this->id = id;
	}
	void set_productdata(string pname, int price, int id)
	{
		product_name = pname;
		this->price = price;
		this->id = id;
	}

	void product_display()
	{
		cout << "\nProduct Name=" << product_name << endl;
		cout << "\nProduct Price=" << price << endl;
		cout << "\nProduct Id=" << id << endl;
	}
};
class costumer
{
protected:
	string c_name;
	long phone_no;
	string c_address;

public:
	costumer()
	{
		c_name = "";
		phone_no = 0;
		c_address = "";
	}
	costumer(string name, int ph, string address)
	{
		c_name = name;
		phone_no = ph;
		c_address = address;
	}

	void set_costumerdetails(string name, int ph, string address)
	{
		c_name = name;
		phone_no = ph;
		c_address = address;
	}
	void costumer_display()
	{
		cout << "\nCostumer Name=" << c_name << endl;
		cout << "\nCostumer Ph.No=" << phone_no << endl;
		cout << "\nCostumer Address=" << c_address << endl;
	}
};

class order : public product, public costumer
{
private:
	int order_id;

public:
	order()
	{
		order_id = 0;
	}
	order(int or_id, string pname, int p_price, int p_id, string cname, int ph, string caddress) : product(pname, p_price, p_id), costumer(cname, ph, caddress)
	{
		order_id = or_id;
	}

	void order_display()
	{
		cout << "Order_id=" << order_id << endl;
		product_display();
		costumer_display();
	}
};

int main()
{
	cout<<"divyang\n";
	order O1(1001, "Smartphone", 10000, 567364, "Mukul", 999888877, "Mumbai");
	cout << "\nOrder Place Successfully:\n\n";
	O1.order_display();
}
