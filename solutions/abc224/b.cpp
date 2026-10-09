#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    vector<vector<long long>> a(h, vector<long long>(w));
    rep(i, h)rep(j, w) cin >> a[i][j];
    
    bool ans = true;

    for (int i1 = 0; i1 < h; i1++) {
        for (int i2 = i1 + 1; i2 < h; i2++) {
            for (int j1 = 0; j1 < w; j1++) {
                for (int j2 = j1 + 1; j2 < w; j2++) {
                    if (a[i1][j1] + a[i2][j2] > a[i2][j1] + a[i1][j2]) ans = false;
                }
            }
        }
    }

    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}