#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> s(n);
    rep(i, n) cin >> s[i];


    vector<vector<char>> p(4, vector<char>(13, 'x'));
    vector<char> suit = { 'H','D','C','S' };
    vector<char> num = { 'A','2','3','4','5','6','7','8','9','T','J','Q','K' };

    rep(i, n) {
        bool x = false;
        rep(j, 4)rep(k, 13) {
            if (s[i][0] == suit[j] && s[i][1] == num[k]) {
                if (p[j][k] == 'x') {
                    x = true;
                    p[j][k] = 'o';
                    break;
                }
            }
        }
        if (!x) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}