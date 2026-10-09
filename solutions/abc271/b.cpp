#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> a(n);
    rep(i, n) {
        int l; cin >> l;
        a[i] = vector<int>(l);
        rep(j, l) cin >> a[i][j];
    }

    rep(i, q) {
        int s, t;
        cin >> s >> t;

        cout << a[s - 1][t - 1] << endl;
    }
    
    return 0;
}