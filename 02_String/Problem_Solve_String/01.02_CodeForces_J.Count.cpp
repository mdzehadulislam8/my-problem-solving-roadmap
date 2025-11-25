#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.length();

    for(int i = 0; i<26; i++){
        char c = i + 'a';
        int ans = 0;

        for(int j=0; j<n; j++){
            if(s[j] == c){
                ans++;
            }
        }
        if(ans>0){
            cout << c << " : " << ans << endl;
        }
    }
}