#include <bits/stdc++.h>
using namespace std;
/*
Last in First Out
* Access and Delete are work in Last element.
*/
int main(){ 
    stack<int>st;
    st.push(100);
    st.push(150);

    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
} 