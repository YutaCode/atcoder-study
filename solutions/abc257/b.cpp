#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(k);
    vector<int> l(q);
    rep(i, k) cin >> a[i];
    rep(i, q) cin >> l[i];
    

    rep(i, q) {
        if (l[i] == k) {
            if (a[l[i] - 1] != n) a[l[i] - 1]++;
        }
        else {
            if (a[l[i]] - a[l[i] - 1] != 1) a[l[i] - 1]++;
        }
    }

    rep(i, k) cout << a[i] << " ";
    cout << endl;

    return 0;
}