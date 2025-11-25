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
    cout << "Set: " << endl;

    for(auto x:st){
        cout << x << " ";
    }
    cout << endl;
    
    cout <<"First value show : " << *st.begin();
    cout << endl;
    cout <<"Last value show : " << *--(st.end()) << endl;

    int x = *st.begin();
    st.erase(x);

    st.erase(--st.end());

    cout << "After erase Set again: " ;
    for(auto x:st){
        cout << x << " ";
    }



    cout << endl <<"Again Last Index: " << endl;
    cout << *(st.rbegin());
    
}


int main(){ 

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   // testcase{
        solve();
   // }

}