#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;
    
    vector<string> s(h);
    rep(i, h) cin >> s[i];

    int x1 = w, x2 = 0, y1 = w, y2 = 0;

    rep(i, h)rep(j, w) {
        if (s[i][j] == 'o') {
            x1 = min(x1, i);
            x2 = max(x2, i);
            y1 = min(y1, j);
            y2 = max(y2, j);
        }
    }

    cout << abs(x2 - x1) + abs(y2 - y1) << endl;

    return 0;
}