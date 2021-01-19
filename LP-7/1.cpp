//Md. Jidanul Hakim Jitu
// 20-44365-3
//Section B2 //Ans: 1


#include <iostream>
using namespace std;
class parent{
public:
void print(int i) {
cout << " First Function Display " << i << endl;
}
void print(double f) {
cout << " Second Function Display " << f << endl;
}
void print(char const *c) {
cout << " Third function Display char* " << c << endl;
}
};
int main() {
    parent P1;
P1.print(10);
P1.print(10.10);
P1.print("ten");
return 0;
}
