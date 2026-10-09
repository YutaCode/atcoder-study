#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    string s;
    cin >> s;
    string t = s;
    int n = s.size();

    string ans1 = s;
    string ans2 = s;

    rep(i, n){
        string tmp = s.substr(i, n - i) + s.substr(0, i);
        ans1 = min(ans1, tmp);
        ans2 = max(ans2, tmp);
    }
    cout << ans1 << endl;
    cout << ans2 << endl;

    return 0;
}