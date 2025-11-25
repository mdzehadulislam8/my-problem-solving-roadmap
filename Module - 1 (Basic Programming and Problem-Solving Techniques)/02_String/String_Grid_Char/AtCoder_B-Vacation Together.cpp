#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;

    string s[105];   
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int arr[105];   
    for (int col = 0; col < d; col++) {
        int count = 1;
        for (int row = 0; row < n; row++) {
            if (s[row][col] == 'x') {
                count = 0;
                break;
            }
        }
        arr[col] = count;
    }

    int highest = 0, streak = 0;

    for (int i = 0; i < d; i++) {
        if (arr[i] == 1) {
            streak++;
        } else {
            if (streak > highest) {
                highest = streak;
            }
            streak = 0;
        }
    }

    if (streak > highest) {
        highest = streak;
    }

    cout << highest << endl;
    return 0;
}
