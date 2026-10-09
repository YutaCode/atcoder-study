#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <iomanip>
#include <cmath>
#include <math.h>

using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
	ll n;
	cin >> n;

	if (n >= 0) cout << (n + 9) / 10  << endl;
	else cout << (n / 10) << endl;
	return 0;
}