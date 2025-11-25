#include <bits/stdc++.h>
using namespace std;

/*
Fist in First out 
* Insert to the last
* Access/Delete the first
*/

int main(){ 
    queue<int> q;

    q.push(3);
    // q = {3}
    cout<<q.front() << endl;

    q.push(5);
    // q = {3,5}
    cout<<q.front() << endl;
    
    q.pop(); //0(1)
    // q = {5}
    cout<<q.front()<<endl;


    /*
    Same kaj ami vextor korte pari erase kore begin di. kintu sekhetre 
    time complexity 0(n) time lagteche eti beshi tai etir cheye
    queue ta best solution hbe.
    */
    vector<int> v;
    v.push_back(3);
    cout << v.front()<<endl;
    v.push_back(5);
    cout<<v.front()<<endl;
    v.erase(v.begin());
    cout<<v.front()<<endl; //0(n)
} 