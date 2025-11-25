#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;

    while(t--){
        char arr[10][11];

        for(int i=0; i<10; i++){
            cin >> arr[i];
        }

        int ans = 0;

        for(int row=0; row<10; row++){
            for(int col=0; col<10; col++){
                if(arr[row][col] == 'X'){
                    int left = col+1;
                    int right = 10-col;
                    int up = row+1;
                    int down = 10-row;

                    int mn = left;
                    if(right<mn) mn = right;
                    if(up<mn) mn = up;
                    if(down<mn) mn = down;

                    ans+=mn;
                }
            }
        }

        cout << ans << endl;
    }
}