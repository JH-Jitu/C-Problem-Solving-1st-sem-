// Ans 3:
//Name: MD. JIDANUL HAKIM JITU
//ID: 20-44365-3

#include <iostream>
using namespace std;
int main(){

    double width, breadth, area;
    cout<<"Type the width value: "; cin>> width;
    cout<<"Type the breadth value: "; cin>> breadth;
    area = width * breadth;
    cout<<"Total area is " << area << " meter square" <<endl;

    if(area > 200){
        cout<<"The AREA IS VERY LARGE"<<endl;
    }
    else if (area < 0){
        cout<<"AREA CAN'T BE LESS THAN 0"<<endl;
    }
    else{
        cout<<"THE AREA IS JUST RIGHT"<<endl;
    }

}
