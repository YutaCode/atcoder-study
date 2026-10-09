#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    vector<string> c(h);
    rep(i, h) cin >> c[i];

    vector<int> ans(w, 0);

    rep(i, h)rep(j, w) if (c[i][j] == '#') ans[j]++;

    rep(i, w) cout << ans[i] << " ";
    cout << endl;
    
    return 0;
}