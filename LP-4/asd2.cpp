//MD JIDANUL HAKIM JITU

#include <iostream>
using namespace std;

class Bookstore
{
    private:
        float  price;
    public:
        //function to get ID
        void getDetails(float p);
        //function to print ID
        int getData();
};

//function defining outside of the class to get detials
void Bookstore::getDetails(float p){
    cout << "Enter Book price: " ;
    cin >> price;
}

//function defining outside of the class to print details
int Bookstore::getData(){
    cout << "Price of your book is: "<< price <<" BDT";
}

int main()
{
    Bookstore Book;   //Creating Object Book
    int p;
 Book.getDetails(p);
 Book.getData();
 return 0;
}
