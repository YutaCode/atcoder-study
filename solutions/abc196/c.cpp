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
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
    string n;
    cin >> n;

    int l = (int)n.size();
    string n1 = n.substr(0, (l + 1) / 2);
    string n2 = n.substr((l + 1) / 2, l - (l + 1)/ 2);

    if (l % 2 == 1) {
        ll ans = 1LL;
        rep(i, (l + 1) / 2 - 1) {
            ans *= 10;
        }

        cout << ans - 1 << endl;
        return 0;
    }

    ll n11 = stoi(n1);
    ll n22 = stoi(n2);

    if (n11 <= n22) cout << n11 << endl;
    else cout << n11 - 1 << endl;
    return 0;
}