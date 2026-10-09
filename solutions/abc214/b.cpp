#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int s, t;
    cin >> s >> t;

    int ans = 0;

    rep(a, s + 1)rep(b, s + 1)rep(c, s - a - b + 1) if (a * b * c <= t) ans++;

    cout << ans << endl;

    return 0;
}