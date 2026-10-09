#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;


int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n - 1);
    rep(i, n - 1) cin >> a.at(i);

    sort(a.begin(), a.end());
    vector<int> b = { a.at(0),a.at(n - 2) };
    int sum = 0;
    rep(i, a.size()) sum += a.at(i);
    sum = sum - a.at(0) - a.at(n - 2);

    int ans = -1;

    for (int i = 100; i >= 0; i--) {
        b.push_back(i);
        sort(b.begin(), b.end());
        if (sum + b.at(1) >= x) ans = i;
        b = { a.at(0),a.at(n - 2) };
    }

    cout << ans << endl;

    return 0;
}