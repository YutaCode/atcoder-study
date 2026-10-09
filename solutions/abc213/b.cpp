#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int64_t> a(n);
    rep(i, n) cin >> a[i];

    int64_t first = -1, second = -1;

    rep(i, n) {
        if (a[i] > first) {
            second = first;
            first = a[i];
        }
        else if (a[i] > second) {
            second = a[i];
        }
    }

    rep(i, n) if (a[i] == second) cout << i + 1 << endl;

    return 0;
}