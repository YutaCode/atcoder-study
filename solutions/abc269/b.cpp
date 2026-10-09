#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    vector<string> s(10);
    rep(i, 10) cin >> s[i];

    int a, b, c, d;

    rep(i, 10){
        bool find = false;
        rep(j, 10) {
            if (s[i][j] == '#') {
                a = i + 1; c = j + 1;
                find = true;
                break;
            }
        }
        if (find) break;
    }

    rep(i, 10)rep(j, 10) {
        if (s[i][j] == '#') {
            b = i + 1; d = j + 1;
        }
    }
    
    cout << a << " " << b << endl;
    cout << c << " " << d << endl;
    return 0;
}