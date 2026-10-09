#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> p(n - 1);
    rep(i, n - 1) {
        int a, b;
        cin >> a >> b;
        p[i] = make_pair(a, b);
    }

    bool ans = true;

    int key = 0;
    if (p[0].first == p[1].first || p[0].first == p[1].second) key = p[0].first;
    else if (p[0].second == p[1].first || p[0].second == p[1].second) key = p[0].second;
    else ans = false;

    rep(i, n - 1) {
        if (p[i].first != key && p[i].second != key) ans = false;
    }

    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}