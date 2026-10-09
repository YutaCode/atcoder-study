#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    string s;
    cin >> s;
    string t = "oxxoxxoxxoxx";

    bool ans = false;
    int n = s.size();

    rep(i, 3) {
        if (t.substr(i, n) == s) ans = true;
    }

    cout << (ans ? "Yes" : "No") << endl;
    return 0;
}