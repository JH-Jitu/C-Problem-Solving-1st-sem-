// Ans 4:
//Name: MD. JIDANUL HAKIM JITU
//ID: 20-44365-3

#include <iostream>
using namespace std;

int main(){
    double electric_1 = 3.75,
    math_1 = 4.00,
    physics_1 = 3.75,
    english_1 = 3.5,
    result;

    result = (electric_1 * 3 + math_1 * 3 + physics_1 * 3 + english_1 * 1)/ (10); //Total Subject: 4, Credit: 3

    cout<< "Your result is: CGPA "<< result <<endl;
    if(result > 4){
        cout<< "CGPA can't be greater than 4.00" <<endl;
    }
    else if(result >= 3.75){
        cout<< "GOOD" <<endl;
    }
    else if(result >= 3.50){
        cout<< "SATISFACTORY" <<endl;
    }
    else if(result >= 3.00){
        cout<< "NEED TO IMPROVE" <<endl;
    }
    else if(result < 3.00 && result > 0){
        cout<< "POOR" <<endl;
    }
    else if(result < 0){
        cout<< "CGPA can't be less than 0" <<endl;
    }
    else{
        cout<< "Result is undefined!" <<endl;
    }
}
