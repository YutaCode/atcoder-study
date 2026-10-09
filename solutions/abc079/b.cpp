#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <map> 
#include <unordered_map>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;
using ll = long long;

vector<ll> memo;

ll lucas(int n) {
    if (n == 0) return memo[0] = 2;
    if (n == 1) return memo[1] = 1;

    if (memo[n] != -1) return memo[n];
    else return memo[n] = lucas(n - 2) + lucas(n - 1);
}

int main() {
    int n;
    cin >> n;

    memo.assign(n + 1, -1LL);

    lucas(n); 

    cout << memo[n] << endl;
    return 0;
}