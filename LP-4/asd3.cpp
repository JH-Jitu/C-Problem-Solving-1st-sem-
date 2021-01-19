#include <iostream>

using namespace std;

class Rectangle
{
	public:
		int length;         //length of rectangle
		int breadth;        //breadth of rectangle
		/* declaring member functions */
		void setLength( int l );
		void setBreadth( int b );
		int getArea();
};

/* defining member functions */
void Rectangle::setLength( int l )
{
	length = l;
	cin>>length;
}
void Rectangle::setBreadth( int b )
{
	breadth = b;
	cin>>breadth;
}
int Rectangle::getArea()
{
	return length * breadth;
}

int main()
{
	Rectangle rt;
	int l, b;
	rt.setLength(l);
	rt.setBreadth(b);
	int area = rt.getArea();
	cout << "Area : " << area << endl;
	return 0;
}
