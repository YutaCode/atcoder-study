#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;


int main() {
    string s;
    cin >> s;

    int ans = 1;

    rep(i, s.size()) {
        for (int j = 1; j <= s.size() - i; j++) {
            string s1 = s.substr(i, j);
            string s2 = s1;
            reverse(s2.begin(), s2.end());
            if (s1 == s2 && j > ans) ans = j;
        }
    }

    cout << ans << endl;

    return 0;
}