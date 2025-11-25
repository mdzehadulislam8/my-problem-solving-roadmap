#include <bits/stdc++.h>
using namespace std;

void solve(){
    vector<pair<int,int>>v;

    v.push_back({1,2});
    v.push_back({1,5});
    v.push_back({1,3});
    v.push_back({2,3});
    v.push_back({3,2});
    v.push_back({2,2});
    v.push_back({5,2});
    v.push_back({4,4});

    reverse(v.rbegin(),v.rend());

    for(auto p : v){
        cout << p.first << " " << p.second << "\n";
    }
}


int main(){ 

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   // testcase{
        solve();
   // }

}