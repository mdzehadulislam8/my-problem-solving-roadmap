#include <iostream>
using namespace std;
int main(){
    int price, note, hisab;
    cin >> price >> note;

    if(note >= price){

     if(price == note || note - price <= 5){
        cout << "Yes" <<endl;
    }else{
        cout << "No";
    }
    }else{
    cout << "No"<<endl;}}

