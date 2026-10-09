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
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;


int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    

    rep(i, s.size()) {
        s[i] = (char)(s[i] + n);
        if (!isupper(s[i])) s[i] = (char)(s[i] - ('Z' - 'A' + 1));
        s[i] = toupper(s[i]);
    }

    cout << s << endl;
    return 0;
}