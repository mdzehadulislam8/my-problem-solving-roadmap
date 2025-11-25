#include <iostream>
using namespace std;
#include <vector>
int main(){
    vector<int>ara={5,6,7};
    vector<vector<int>> v;
    vector<int>tmp={3,2,5};
    vector<int>tmp2={1,2,3,4,5,6,7};

    v.push_back(tmp);
    v.push_back(tmp2);
    cout << "Size of V : " << v.size() << endl;

    for(auto x : v){
        cout << "SIZE = " << x.size() << endl;
        for(auto y : x) cout << y << " ";
        cout << endl;
    }
    return 0;
}