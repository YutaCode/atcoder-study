#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int n, p;
    cin >> n >> p;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    int ans = 0;

    rep(i, n) if (a[i] < p) ans++;

    cout << ans << endl;
    return 0;
}