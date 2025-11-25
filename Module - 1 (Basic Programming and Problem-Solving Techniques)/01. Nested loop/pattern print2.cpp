#include <iostream>
using namespace std;
int main(){
    int n;
cin >> n;
for(int i = 1; i<=n; i++){
        //Space printing
    for(int sp = 1; sp <= n - i; sp++) {cout << " ";}

        cout << "* ";
        if(i != n){
                //middle convert star to space
            for(int sp = 1; sp <= (i - 2) * 2; sp++) cout << " ";
        }else{
            for(int st = 1; st <= i-2; st++) cout << "* ";
        }
        if(i > 1) cout << "*";
        cout << endl;
    }
}

