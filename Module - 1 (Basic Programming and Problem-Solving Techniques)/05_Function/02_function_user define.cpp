
int add(int a, int b){
    int result = a+b;
    return result;
}

#include <iostream>
using namespace std;
int main(){
    int b,c;
    cin >> b >> c;

    int sum = add(b,c);
    cout << sum << endl;
    return 0;
}