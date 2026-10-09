#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

bool palindrome(string s) {
    string t = s;
    reverse(t.begin(), t.end());
    if (s == t) return true;
    else return false;
}


int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    bool ans = false;
    rep(i, n)rep(j, n) {
        if (i == j) continue;
        if (palindrome(s[i] + s[j])) ans = true;
    }

    cout << (ans ? "Yes" : "No") << endl;

    return 0;
}