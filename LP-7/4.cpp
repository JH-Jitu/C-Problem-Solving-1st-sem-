//Md. Jidanul Hakim Jitu
// 20-44365-3
//Section B2 //Ans: 4


#include <iostream>
using namespace std;

// Abstract class
class useAbs {
   protected:
    float inValue;

   public:
    void getResult() {
        cin >> inValue;
    }

    // pure virtual Function
    virtual float calculateArea() = 0;
};

// Derived class
class Square : public useAbs {
   public:
    float calculateArea() {
        return inValue * inValue;
    }
};

int main() {
    Square res;

    cout << "Enter the length of the square: ";
    res.getResult();
    cout << "Area of square: " << res.calculateArea() << endl;

    return 0;
}
