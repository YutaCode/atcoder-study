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

	int ans = 0;
	int tmp = 0;
	rep(i, (int)s.size()) {
		if (s[i] == 'A' || s[i] == 'T' || s[i] == 'G' || s[i] == 'C') tmp++; else tmp = 0;
		ans = max(ans, tmp);
	}

	cout << ans << endl;
	return 0;
}