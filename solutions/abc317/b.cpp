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
    rep(i, n) cin >> a.at(i);

    sort(a.begin(), a.end());

    rep(i, n - 1) if (a.at(i) + 1 != a.at(i + 1)) {
        cout << a.at(i) + 1 << endl;
        break;
    }

    return 0;
}