#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    vector<int> p(26);
    rep(i, 26) cin >> p[i];

    string alpha = "abcdefghijklmnopqrstuvwxyz";

    rep(i, 26) cout << alpha[p[i] - 1];
    cout << endl;
    return 0;
}