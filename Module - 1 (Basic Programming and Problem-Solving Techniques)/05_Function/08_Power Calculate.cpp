#include <iostream>
using namespace std;

int pow(int a, int b){
    int res = 1;

    for(int i=1; i<=b; i++){
        res *= a;
    }
    return res;
}

int main(){
   int result = pow(2,3);
   cout << result << endl;
   return 0;
}