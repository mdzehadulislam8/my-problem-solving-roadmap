#include <bits/stdc++.h>
using namespace std;
int main(){ 

    multiset<int>st;
    st.insert(1);
    st.insert(1);
    st.insert(-4);
    st.insert(3); 
    st.insert(3);
    st.insert(3);
    st.insert(2);

    cout << "Multiset: ";
    for(auto x:st){
        cout << x << " ";
    }
    cout << endl;

    st.erase(3); // All 3 value are erase 
    cout << "After All 3 value erase: ";
    for(auto x:st){
        cout << x << " ";
    }
    cout << endl;

    st.erase(st.find(1));
    cout << "After 1 value erase: ";
    for(auto x:st){
        cout << x << " ";
    }

}