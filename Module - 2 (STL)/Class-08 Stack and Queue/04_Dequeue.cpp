#include <bits/stdc++.h>
using namespace std;
/*
Deueue : Mix of stack and queue
* Insert and Delete both side
* Access both side
* Acessing all element
* Index wise access

Dequeue functionality:
1. push_back(x) : Insert element x to the back of the deque.
2. push_front(x) : Insert element x to the front of the deque.
3. pop_back() : Remove the last element from the deque.
4. pop_front() : Remove the first element from the deque.
5. front() : Access the first element of the deque.
6. back() : Access the last element of the deque.
7. operator[] : Access the element at a specific index.
8. size() : Get the number of elements in the deque.

Time Complexity:
* Insertion/Deletion at both ends: O(1) better than vector and list
* Accessing elements by index: O(1) for random access, O(n) for sequential access.
* Iteration through all elements: O(n)
* [] operator : O(1) for random access, O(log n) or O(sqrt n) for sequential access.

Limitations:
* cannot access middle element directly like vector
*/
int main(){ 
    deque<int> d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    //d = {10,20,30}
    d.push_front(5);
    //d = {5,10,20,30}
    d.pop_back();
    //d = {5,10,20}
    d.pop_front();
    //d = {10,20}
    d.pop_front();
    //d = {20}
    cout << "Left element: " << d.front() << endl; //5
    cout << "Right element: " << d.back() << endl; //30
    for(auto& x:d){
        cout << x << " "; // d = {5,10,20,30}
    }
    cout<<endl;
    cout << "Seond element: " << d[1] << endl; //20  jodi eti vector e ber kortam second elemnt ti 
    // tahole eti hoto 0(1) but jokhon ami deque te ber korbo tokhon eti hbe 0(logn) or sqrt(n)

 

}