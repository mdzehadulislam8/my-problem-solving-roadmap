#include <bits/stdc++.h>  
using namespace std;
int main(){
    int n;
    cin>>n;

    int x[n],y[n];

    for(int i=0; i<n; i++){
        cin >> x[i]>> y[i];
    }

    double ans = 0;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            // i point j distance
            int dx = x[i] - x[j];
            int dy = y[i] - y[j];

            double dist = sqrtl((double)dx*dx+(double)dy*dy);

            if(dist > ans){
                ans = dist;
            }
        }
    }
    cout << fixed << setprecision(9) << ans << endl;

    return 0;
}