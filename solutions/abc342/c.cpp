#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <map>
#include <unordered_map>
#include <queue>
#include <climits>
#include <bitset>
#include <set>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;


int main() {
    int n;
    string s;
    int q;
    cin >> n >> s >> q;

    vector<char> alpha;
    rep(i, 26) alpha.push_back(char('a' + i));

    rep(i, q) {
        char c, d;
        cin >> c >> d;
        rep(j, 26) {
            if (alpha[j] == c) alpha[j] = d;
        }
    }

    for (char x : s) {
        rep(j, 26) {
            if (x == (char)(j + 'a')) cout << alpha[j];
        }
    }

    cout << endl;
    return 0;
}