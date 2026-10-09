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

    vector<pair<int, int>> sc(m);
    rep(i, m) {
        int s, c;
        cin >> s >> c;
        s--;
        sc[i] = make_pair(s, c);
    }

    int ans = -1;
    for (int i = 0; i < 1000; i++) {
        bool ok = true;
        string num = to_string(i);
        if (num.size() != n) continue;

        rep(j, m) {
            if (num[sc[j].first] != (char)(sc[j].second + '0')) ok = false;
        }

        if (ok) {
            ans = i;
            break;
        }
    }

    cout << ans << endl;
    return 0;
}
