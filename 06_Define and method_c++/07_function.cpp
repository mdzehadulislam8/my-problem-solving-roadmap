#include <bits/stdc++.h>
using namespace std;
#define testcase int t; cin >> t; for(int i=1; i<=t; i++)

void solve(){
    int ara[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> ara[i][j];
        }
    }

    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            if(ara[i][j] == 5){
                cout << "ROW : " << i+1 << " COL : " << j+1 << endl;
                return;
            }
        }
    }
}


int main(){ 

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    testcase{
        solve();
    }

}