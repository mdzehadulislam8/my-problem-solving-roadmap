#include <bits/stdc++.h>
using namespace std;
int main(){ 
    int n,q;
    cin >> n >> q;

    stack<int>s[n];

    while(q--){
        int qtype;
        cin >> qtype;

        if(qtype == 0){
            int t,x;
            cin >> t >> x;
            s[t].push(x);
        }else if(qtype==1){
            int t;
            cin >> t;
            if(!s[t].empty())
            cout<<s[t].top() << endl;
        }else{
            int t;
            cin >> t;
            if(!s[t].empty()){
                s[t].pop();
            }
        }
    }
} 