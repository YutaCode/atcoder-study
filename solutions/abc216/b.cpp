#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<string, string>> x(n);
    rep(i, n) {
        string s, t;
        cin >> s >> t;
        x[i] = make_pair(s, t);
    }

    rep(i, n)rep(j, n) {
        if (i == j) continue;
        if (x[i] == x[j]) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
}