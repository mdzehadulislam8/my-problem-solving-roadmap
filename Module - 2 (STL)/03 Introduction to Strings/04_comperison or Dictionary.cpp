#include <bits/stdc++.h>
using namespace std;

void solve(){
    string s1 = "Hi";
    string s2 = "Hiii";
// comperison e jokhoni ekta sath arekta chuto hoye tkhni result diye dibe jeta chuto eta chuto bolar. jmon aZ ar Za ekhane Za ta chuto hbe karon shurute boiro hater Z jeti asqi value kom tai ekhnen shurutei tst kore result dibe small Za
    if(s1 < s2) cout << "S1 is smaller" << endl;
    else if(s1 > s2) cout << "S1 is larger" << endl;
    else cout << "S1 and S2 are equal";
} 
int main(){ 
    solve();
}