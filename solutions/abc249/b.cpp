#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    string s;
    cin >> s;
    bool ans1 = false, ans2 = false, ans3 = true;

    rep(i, s.size()) {
        if (isupper(s[i])) ans1 = true;
        if (islower(s[i])) ans2 = true;
    }

    string t;
    rep(i, s.size()) {
        if (i == 0) t += s[0];
        else {
            if (t.find(s[i]) != string::npos) {
                ans3 = false;
                break;
            }
            t += s[i];
        }
    }

    if (ans1 && ans2 && ans3) cout << "Yes" << endl;
    else cout << "No" << endl;
    
    return 0;
}