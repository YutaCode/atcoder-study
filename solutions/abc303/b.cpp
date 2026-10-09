#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(m, vector<int>(n));
    rep(i, m) rep(j, n) cin >> a[i][j];

    vector<vector<char>> b(n);
    rep(i, n) {
        b[i] = vector<char>(n, 'x');
    }

    rep(i, m)rep(j, n - 1) {
        b[a[i][j] - 1][a[i][j + 1] - 1] = 'o';
        b[a[i][j + 1] - 1][a[i][j] - 1] = 'o';
    }

    int ans = 0;
    rep(i, n)rep(j, n) if (b[i][j] == 'x') ans++;

    cout << (ans - n) / 2 << endl;
    return 0;
}