#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<int> b(k);
    rep(i, k) cin >> b[i];

    int tasty = 0;
    rep(i, n) tasty = max(tasty, a[i]);

    rep(i, k) if (a[b[i] - 1] == tasty) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}