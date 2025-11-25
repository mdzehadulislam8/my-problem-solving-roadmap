#include <iostream>
using namespace std;
int main(){
    char arr2d[8][9];

    for(int i=0; i<8; i++){
        cin >> arr2d[i];
    }

    for(int i=0; i<8; i++){
        for(int col=0; col<8; col++){
            if(arr2d[i][col]=='*'){
                int num = 8-i;
                char c = 'a'+col;
                cout << c << num;
                return 0;
            }
        }
    }
}