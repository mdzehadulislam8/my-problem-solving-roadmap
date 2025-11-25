/*
complexity --->> 0(n)
*/

#include <bits/stdc++.h>
using namespace std;
void solve(){
    string str1 = "Hello";
    string str2 = "World";
    string str = str1 + " My " + str2;
    cout << str << endl;


    str1 += " " + str2;
    cout << str1 << endl;
}
int main(){ 
    solve();
}