#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <map>
#include <unordered_map>
#include <queue>
#include <climits>
#include <bitset>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;


int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> p(n);
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--; b--;

        p[a].push_back(b);
        p[b].push_back(a);
    }

    vector<int> v;
    rep(i, n) v.push_back(i);

    int ans = 0;
    do {
        bool is_ok = true;
        rep(i, n - 1) {
            if (find(p[v[i]].begin(), p[v[i]].end(), v[i + 1]) == p[v[i]].end()) {
                is_ok = false;
                break;
            }
        }
        if (is_ok) ans++;
    } while (next_permutation(v.begin() + 1, v.end()));

    cout << ans << endl;
    return 0;
}