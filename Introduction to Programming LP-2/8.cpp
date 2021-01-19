// Ans 8:
//Name: MD. JIDANUL HAKIM JITU
//ID: 20-44365-3
#include <iostream>
using namespace std;

int main() {
  int v = 3;
  do {
    cout<<"V = " << v << "V" << " => " << "CORRECT" <<endl;
    v++;
    if(v==20){
        cout<<"V = " << v << "V" << " => " <<"It's going to incorrect";
        break;
    }
  }
  while (v <= 20);
  return 0;
}

