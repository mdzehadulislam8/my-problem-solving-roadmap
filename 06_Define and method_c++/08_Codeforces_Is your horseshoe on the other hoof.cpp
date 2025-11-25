#include <bits/stdc++.h>
using namespace std;
#define testcase int t; cin >> t; for(int i=1; i<=t; i++)

void solve(){

    int ara[4];
    for(int i=0; i<4; i++){
        cin >> ara[i];
    }

    sort(ara, ara+4);

    int clr=0;

    for(int i=0; i<4; i++){
        if(i>0 && ara[i] == ara[i-1]) continue;
        clr++;
    }

    cout << 4 - clr << endl;
    
}


int main(){ 

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   // testcase{
        solve();
   // }

}