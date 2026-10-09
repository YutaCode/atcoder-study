#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    vector<string> s(3);
    rep(i, 3) cin >> s[i];

    string t;
    cin >> t;

    rep(i, t.size()) {
        if (t[i] == '1') cout << s[0];
        if (t[i] == '2') cout << s[1];
        if (t[i] == '3') cout << s[2];
    }
    
    cout << endl;
    return 0;
}