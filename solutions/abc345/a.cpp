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
	string s;
	cin >> s;
	int n = s.size();
	bool ok = true;
	if (s[0] != '<' || s[n - 1] != '>') ok = false;
	for (int i = 1; i <= n - 2; i++) if (s[i] != '=') ok = false;

	if (ok) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}