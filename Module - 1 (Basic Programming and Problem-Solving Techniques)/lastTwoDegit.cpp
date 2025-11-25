#include <iostream>
using namespace std;
int main (){
    int a,b,c,d;
    cin >> a >> b >> c >> d;

    int multiplication = a * b * c * d;
    int lastDigit = multiplication % 10;
    multiplication /= 10;

    int SlastDegit = multiplication % 10;

    cout << endl << SlastDegit << " " << lastDigit << endl;
}
