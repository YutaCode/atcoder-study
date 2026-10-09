#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;


int main() {
    int n, d;
    cin >> n >> d;
    vector<string> s(n);
    rep(i, n) cin >> s[i];

    vector<char> p(d, 'o'); 
    rep(i, d)rep(j, n) {
        if (s[j][i] == 'x') {
            p[i] = 'x';
            break;
        }
    }

    int ans = 0;
    rep(i, d) {
        if (p[i] == 'o') {
            int tmp = 0;
            for (int j = i; j < d; j++) {
                if (p[j] == 'x') break;
                tmp++;
            }
            ans = max(ans, tmp);
        }
    }

    cout << ans << endl;

    return 0;
}