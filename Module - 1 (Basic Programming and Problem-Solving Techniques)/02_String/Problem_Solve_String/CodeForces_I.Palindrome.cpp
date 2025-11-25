#include <iostream>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int n = s.length();
    string s2(n, ' ');
    for(int i = 0; i<n; i++){
        int j = n-1-i;
        s2[j] = s[i];
    }
    int count = 1;
    for(int i=0; i<n; i++){
        if(s[i] != s2[i]){
            count = 0;
            break;
        }
    }
    if(count == 1){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}