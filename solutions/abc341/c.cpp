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
    int h, w, n;
    cin >> h >> w >> n;
    string t;
    cin >> t;

    vector<string> s(h);
    rep(i, h) cin >> s[i];

    int ans = 0;
    vector<int> dx = { 0, -1, 0, 1 }, dy = { -1, 0, 1, 0 };
    for (int i = 1; i < h - 1; i++) {
        for (int j = 1; j < w - 1; j++) {
            bool is_ok = true;
            int x = i, y = j, id = 0;
            if (s[x][y] == '#') is_ok = false;
            rep(k, (int)t.size()) {
                if (t[k] == 'L') id = 0;
                else if (t[k] == 'U') id = 1;
                else if (t[k] == 'R') id = 2;
                else if (t[k] == 'D') id = 3;

                x += dx[id]; y += dy[id];
                if (s[x][y] == '#') {
                    is_ok = false;
                    break;
                }
            }
            if (is_ok) ans++;
        }
    }
    cout << ans << endl;
    return 0;
}