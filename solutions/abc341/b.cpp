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
    int n;
    cin >> n;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];

    rep(i, n - 1) {
        ll s, t;
        cin >> s >> t;

        a[i + 1] += (a[i] / s) * t;
    }

    cout << a[n - 1] << endl;
    return 0;
}