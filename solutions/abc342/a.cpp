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
    string s;
    cin >> s;

    if (s[0] != s[1]) {
        if (s[0] != s[2]) {
            cout << 1 << endl;
            return 0;
        }
        else cout << 2 << endl;
        return 0;
    }

    for (int i = 2; i < (int)s.size(); i++) {
        if (s[i] != s[0]) {
            cout << i + 1 << endl;
            return 0;
        }
    }
}