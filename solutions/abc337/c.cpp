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
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> indexMap;

    rep(i, n) {
        cin >> a[i];
        indexMap[a[i]] = i;
    }

    int now = indexMap[-1];
    cout << now + 1 << " ";

    rep(i, n - 1) {
        now = indexMap[now + 1];
        cout << now + 1 << " ";
    }

    cout << endl;
    return 0;
}