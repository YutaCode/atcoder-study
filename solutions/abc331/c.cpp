#include <iostream>
#include <vector>
#include <algorithm>

#define rep(i, N) for(int i = 0; i < N; i++)

using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;

    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    vector<ll> b = a;
    sort(a.rbegin(), a.rend());

    vector<ll> s(n);
    s[0] = a[0];
    for (int i = 1; i < n; ++i) {
        s[i] = s[i - 1] + a[i];
    }

    rep(i, n) {
        if (b[i] == a[0]) {
            cout << 0 << " ";
            continue;
        }

        auto it = lower_bound(a.begin(), a.end(), b[i], greater<ll>());
        int idx = distance(a.begin(), it);

        cout << s[idx - 1] << " ";
    }

    cout << endl;
    return 0;
}
