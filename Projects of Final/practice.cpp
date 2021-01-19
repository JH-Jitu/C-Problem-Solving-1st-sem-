#include<iostream>
using namespace std;
class item
{
private:
	int id; // member data
	double price;
	char *name;
public:
	void getdata() //member function
	{
		name=new char[50];
		cin>>id>>price>>name;
	}
	void putdata()
	{
		cout<<"id="<<id<<"price="
        <<price<<"name="<<name<<endl;
	}
};

int main()
{
	item t1;
	t1.getdata();
	t1.putdata();
	return 0;
}
