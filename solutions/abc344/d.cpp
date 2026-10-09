#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {
    string t;
    int n;
    cin >> t >> n;
    vector<vector<string>> s(n);
    rep(i, n) {
        int a;
        cin >> a;
        rep(j, a) {
            string x;
            cin >> x;
            s[i].push_back(x);
        }
    }

    int l = t.size();
    int mx = l + 1;
    vector<vector<int>> dp(n + 1, vector<int>(l + 1, mx));
    dp[0][0] = 0;

    rep(i, n) {
        rep(j, l + 1) {
            dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
            for (const string &item : s[i]) {
                for (int k = 0; k + item.size() <= l; ++k) {
                    if (t.substr(k, item.size()) == item) {
                        dp[i + 1][k + item.size()] = min(dp[i + 1][k + item.size()], dp[i][k] + 1);
                    }
                }
            }
        }
    }

    if (dp[n][l] == mx) cout << -1 << endl;
    else cout << dp[n][l] << endl;

    return 0;
}
