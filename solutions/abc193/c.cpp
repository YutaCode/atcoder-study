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
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;

    vector<ll> lst = {};
    for (ll a = 2; a * a <= n; a++) {
        for (ll b = 2; b <= log(n) / log(a); b++) lst.push_back(pow(a, b));
    }

    sort(lst.begin(), lst.end());
    lst.erase(unique(lst.begin(), lst.end()), lst.end());

    cout << n - lst.size() << endl;
    return 0;
}