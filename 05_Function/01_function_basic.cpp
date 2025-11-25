
int add(int a, int b){
    int result = a+b;
    return result;
}

#include <iostream>
using namespace std;
int main(){
    int sum = add(2,3);
    cout << sum << endl;
    return 0;
}