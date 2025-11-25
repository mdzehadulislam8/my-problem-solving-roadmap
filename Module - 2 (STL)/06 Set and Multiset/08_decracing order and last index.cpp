#include <bits/stdc++.h>
using namespace std;
int main(){ 

    multiset<int, greater <int>>st;
    st.insert(1);
    st.insert(1);
    st.insert(-4);
    st.insert(3); 
    st.insert(3);
    st.insert(3);
    st.insert(2);

    for(auto x:st){
        cout << x << " ";
    }
    cout << endl;
    cout << *(st.rbegin());

}