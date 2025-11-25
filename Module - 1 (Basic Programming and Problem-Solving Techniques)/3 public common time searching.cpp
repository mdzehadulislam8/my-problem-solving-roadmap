
#include <iostream>
using namespace std;
int main(){
    int b1,e1,b2,e2,b3,e3,b,e;
    cin >> b1 >> e1 >> b2 >> e2 >> b3 >> e3;

    if(b1 > b2) b = b1;
    else b = b2;
    if(b3 > b) b = b3;

    if(e1 < e2) e = e1;
    else e = e2;
    if(e3 < e) e = e3;

    if(b > e) cout << "-1" << endl;
    else cout << b << " " << e << endl;
}

