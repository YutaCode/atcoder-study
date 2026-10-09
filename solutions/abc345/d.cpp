#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
using ll = long long;
using Graph = vector<vector<int>>;

int n, h, w;
vector<pair<int, int>> tiles;
vector<vector<bool>> grid;
vector<bool> used;
int Area = 0;

bool ok(int x, int y, int tileW, int tileH) {
    if (x + tileH > h || y + tileW > w) return false;
    for (int i = x; i < x + tileH; ++i) {
        for (int j = y; j < y + tileW; ++j) {
            if (grid[i][j]) return false;
        }
    }
    return true;
}

void place(int x, int y, int tileW, int tileH, bool placeTile) {
    for (int i = x; i < x + tileH; ++i) {
        for (int j = y; j < y + tileW; ++j) {
            grid[i][j] = placeTile;
        }
    }
    if (placeTile) {
    Area += tileW * tileH;
} else {
    Area -= tileW * tileH;
}
}

bool dfs(int x, int y) {
    if (x == h) {
        return Area == h * w; 
    }
    if (y == w) return dfs(x + 1, 0);
    if (grid[x][y]) return dfs(x, y + 1);

    for (int i = 0; i < n; ++i) {
        if (used[i]) continue;
        int tileW = tiles[i].first, tileH = tiles[i].second;

        if (ok(x, y, tileW, tileH)) {
            place(x, y, tileW, tileH, true);
            used[i] = true;
            if (dfs(x, y + 1)) return true;
            place(x, y, tileW, tileH, false);
            used[i] = false;
        }
        if (tileW != tileH && ok(x, y, tileH, tileW)) {
            place(x, y, tileH, tileW, true);
            used[i] = true;
            if (dfs(x, y + 1)) return true;
            place(x, y, tileH, tileW, false);
            used[i] = false;
        }
    }
    return false;
}

int main() {
    cin >> n >> h >> w;
    tiles.resize(n);
    used.resize(n, false);
    for (int i = 0; i < n; ++i) {
        cin >> tiles[i].first >> tiles[i].second;
    }

    grid.assign(h, vector<bool>(w, false));

    if (dfs(0, 0)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
