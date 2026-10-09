#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int l, r;
    string s;
    cin >> l >> r >> s;
    l--; r--;

    string t = s.substr(l, r - l + 1);
    reverse(t.begin(), t.end());

    string ans = s.substr(0, l) + t + s.substr(r + 1, (int)s.size() - r);

    cout << ans << endl;
    return 0;
}