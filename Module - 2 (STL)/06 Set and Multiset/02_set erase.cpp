#include <bits/stdc++.h>
using namespace std;

void solve(){
    /*
    -> set e unique value rakhe duplicate value ignnore kore
    -> set e value sort kore rakhe
    -> value insert e set e Time complexity hocche (log n)
    
    */
    set<int>st;
    st.insert(1);
    st.insert(-4);
    st.insert(3);
    st.insert(3);
    st.insert(2);
    cout << "Set: ";
    for(auto x:st){
        cout << x << " ";
    }
    cout << endl;

    cout << "After erase: ";
    st.erase(3);
    for(auto x:st){
        cout << x << " ";
    }
    
}


int main(){ 

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   // testcase{
        solve();
   // }

}