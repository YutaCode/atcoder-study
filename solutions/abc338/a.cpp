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

    int n = (int)s.size();

    if (!isupper(s[0])) {
        cout << "No" << endl;
        return 0;
    }

    for (int i = 1; i < n; i++) {
        if (!islower(s[i])) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}