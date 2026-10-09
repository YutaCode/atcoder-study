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
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
    string s;
    cin >> s;

    vector<int> x(26, 0);

    rep(i, (int)s.size()) {
        x[s[i] - 'a']++;
    }

    int ans = 0, max = -1;
    rep(i, 26) {
        if (x[i] > max) {
            ans = i;
            max = x[i];
        }
    }

    cout << (char)(ans + 'a') << endl;
    return 0;
}