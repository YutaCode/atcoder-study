#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    int n = s.size();
    int m = t.size();

    rep(i, n - m + 1) {
        string p = s.substr(i, t.size());
        if (p == t) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}