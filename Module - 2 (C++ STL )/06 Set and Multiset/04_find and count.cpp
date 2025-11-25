#include <bits/stdc++.h>
using namespace std;
int main(){ 

    set<int>st;
    st.insert(1);
    st.insert(-4);
    st.insert(3);

    st.insert(2);


    cout << st.count(3) << endl;
    st.erase(st.find(3));

    for(auto x:st){
        cout << x << " ";
    }
    cout << endl;
}