#include <iostream>
using namespace std;

void increment(int a){
    a++; 
    cout << "Inside function value: " << a << endl;
}

int main(){
   int number = 5;

   increment(number); 

   // Call by value
   cout << "Inside main value: " << number << endl;

   return 0;
}