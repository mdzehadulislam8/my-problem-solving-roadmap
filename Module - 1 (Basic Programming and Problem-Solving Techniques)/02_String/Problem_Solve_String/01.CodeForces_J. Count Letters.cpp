#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;

    int n = s.length();

    int freq[26] = {0};

    for(int i=0; i<n; i++){
        char ch = s[i];
        freq[ch - 'a']++;
    }

     for(int i=0; i<26; i++){
        if(freq[i] > 0){
            cout << char(i + 'a') << " : " << freq[i] << endl;
        }
    }
}