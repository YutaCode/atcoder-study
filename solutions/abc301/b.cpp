#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, n) cin >> a[i];
    vector<int> b;

    rep(i, n - 1) {
        int tmp = a[i];
        b.push_back(tmp);
        while (a[i + 1] - tmp > 1) {
            tmp++;
            b.push_back(tmp);
        }
        while (a[i + 1] - tmp < -1) {
            tmp--;
            b.push_back(tmp);
        }
    }
    b.push_back(a[n - 1]);

    rep(i, b.size()) cout << b[i] << " ";
    cout << endl;
    return 0;
}