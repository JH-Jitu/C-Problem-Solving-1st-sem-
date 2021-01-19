//Md. Jidanul Hakim Jitu
// 20-44365-3
//Section B2 //Ans: 3


#include <iostream>
using namespace std;

class class_1 {
   public:
    virtual void print() {
        cout << "Function 1" << endl;
    }
};

class class_2 : public class_1 {
   public:
    void print() {
        cout << "Function 2" << endl;
    }
};

int main() {
    class_2 obj;

    // pointer of class_1 type that points to obj
    class_1* base1 = &obj;

    // calls member function of class_2 class
    base1->print();

    return 0;
}
