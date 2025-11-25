
int isEven(int n){
    if(n%2==0) return true;
    return false;
}

#include <iostream>
using namespace std;
int main(){
    int num;
    cin >> num;

    bool result = isEven(num);
    cout << result << endl;
    return 0;
}