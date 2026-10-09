#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;


int main() {
    int n, m;
    cin >> n >> m;
    vector<string> c(n);
    vector<string> d(m);
    vector<int> p(m + 1);
    rep(i, n) cin >> c[i];
    rep(i, m) cin >> d[i];
    rep(i, m + 1) cin >> p[i];

    int ans = 0;
    rep(i, n) {
        bool in_list = false;
        rep(j, m) {
            if (c[i] == d[j]) {
                ans += p[j + 1];
                in_list = true;
                continue;
            }
        }
        if (!in_list) ans += p[0];
    }
    

    cout << ans << endl;

    return 0;
}