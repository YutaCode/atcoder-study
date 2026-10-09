#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;

    vector<pair<string, char>> x(4);
    x[0] = make_pair("ABC", 'x');
    x[1] = make_pair("ARC", 'x');
    x[2] = make_pair("AGC", 'x');
    x[3] = make_pair("AHC", 'x');

    rep(i, 4) {
        if (s1 == x[i].first) x[i].second = 'o';
        if (s2 == x[i].first) x[i].second = 'o';
        if (s3 == x[i].first) x[i].second = 'o';
    }

    rep(i, 4) if (x[i].second == 'x') cout << x[i].first << endl;
    return 0;
}