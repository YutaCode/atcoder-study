#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    if (s == t) {
        cout << "Yes" << endl;
        return 0;
    }

    int n = s.size();
    rep(i, n - 1) {
        string u = s;
        char tmp = u[i];
        u[i] = u[i + 1];
        u[i + 1] = tmp;

        if (t == u) {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;
    return 0;
}