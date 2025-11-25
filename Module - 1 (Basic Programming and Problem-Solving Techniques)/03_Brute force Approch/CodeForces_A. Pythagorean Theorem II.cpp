#include <bits/stdc++.h>  
using namespace std;
int main(){
    int n; 
    cin >> n;

    int ans = 0;

    for(int a=1; a<=n; a++){
        for(int b=a; b<=n; b++){
            int c = sqrt(a*a*1.0+b*b);

            if(c*c == a*a + b*b && b<=c && c<=n){
                ans++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}