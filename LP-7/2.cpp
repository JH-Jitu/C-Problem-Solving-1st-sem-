//Md. Jidanul Hakim Jitu
// 20-44365-3
//Section B2 //Ans: 2


#include <iostream>
using namespace std;
class class_a {
public:
   void disp(){
      cout<<"Function of Parent Class";
   }
};
class class_b: public class_a{
public:
   void disp() {
      cout<<"Function of Child Class";
   }
};
int main() {
   class_b obj;     //will print the last function components
   obj.disp();
   return 0;
}
