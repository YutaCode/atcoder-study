#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n < 1000) {
        cout << n << endl;
        return 0;
    }

    string s = to_string(n);
    string s1 = s.substr(0, 3);
    rep(i, s.size() - 3) s1.push_back('0');

    cout << s1 << endl;

    return 0;
}