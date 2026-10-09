#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<vector<int>> a(n);

    rep(i, n) {
        a[i] = vector<int>(i + 1);
        rep(j, i + 1) {
            if (j == 0 || j == i) a[i][j] = 1;
            else a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }

    rep(i, n) {
        rep(j, i + 1) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}