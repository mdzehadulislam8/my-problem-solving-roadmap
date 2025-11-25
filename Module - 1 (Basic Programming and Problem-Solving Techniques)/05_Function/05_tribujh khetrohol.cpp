
#include <iostream>
#include <math.h>
using namespace std;

float pi = acos(-1.0);

float area(int r){
    float result = pi * r * r;
    return result;
}


int main(){
   int n;
   cin >> n;

   float result = area(n);

   cout << result << endl;

    return 0;
}