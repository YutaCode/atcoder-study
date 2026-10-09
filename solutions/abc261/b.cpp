#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> a(n);
    rep(i, n) cin >> a[i];
    bool ans = true;

    rep(i, n)rep(j, i) {
        if (a[i][j] == 'L' && a[j][i] != 'W') ans = false;
        if (a[i][j] == 'W' && a[j][i] != 'L') ans = false;
        if (a[i][j] == 'D' && a[j][i] != 'D') ans = false;
    }

    cout << (ans ? "correct" : "incorrect") << endl;

    return 0;
}