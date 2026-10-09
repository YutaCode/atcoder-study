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
#include <set>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;


int main() {
    int n;
    cin >> n;
    vector<int> x(n), y(n), h(n);
    rep(i, n) cin >> x[i] >> y[i] >> h[i];

    rep(cx, 101)rep(cy, 101) {
        ll H = -1;
        bool valid = true;
        rep(i, n) {
            int tempH = h[i] + abs(x[i] - cx) + abs(y[i] - cy);
            if (h[i] > 0) {
                if (H == -1) H = tempH;
                else if (H != tempH) { 
                    valid = false;
                    break;
                }
            }
        }

        if (valid) {
            rep(i, n) {
                if (h[i] == 0 && H - abs(x[i] - cx) - abs(y[i] - cy) > 0) {
                    valid = false;
                    break;
                }
            }
        }

        if (valid) {
            cout << cx << " " << cy << " " << H << endl;
            return 0;
        }
    }
}