#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];

    vector<int> p;

    rep(i, n) {
        p.push_back(0);
        rep(j, i + 1) p[j] += a[i];
    }

    int ans = 0;
    rep(i, n) if (p[i] >= 4) ans++;

    cout << ans << endl;

    return 0;
}