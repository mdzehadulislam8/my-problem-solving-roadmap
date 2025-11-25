#include <bits/stdc++.h>
using namespace std;
int main(){ 

    set <int> st = {0,100};

    int q,ans = 100;

    cin >> q;
    while(q--){
        int x;
        cin >> x;
        st.insert(x);
        auto it = st.find(x);
        ++it;
        ans=min(ans,(*it)-x);
        it=st.find(x);
        --it;
        ans=min(ans,x-(*it));
        cout<<ans<<'\n';
    }
}