#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<char> res(n, 'x');

    int ans = 0;
    int i = x - 1;

    while (res[i] != 'o') {
        res[i] = 'o';
        ans++;
        i = a[i] - 1;
    }

    cout << ans << endl;

    return 0;
}