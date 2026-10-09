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
    vector<int> p(n);
    rep(i, n) cin >> p[i];

    int q;
    cin >> q;

    rep(i, q) {
        int a, b;
        cin >> a >> b;

        rep(j, n) {
            if (p[j] == a) {
                cout << a << endl;
                break;
            }
            else if (p[j] == b) {
                cout << b << endl;
                break;
            }
        }
    }
}