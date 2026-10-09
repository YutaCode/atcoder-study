#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <map> 
#include <unordered_map>
#include <queue>
#define rep(i, N) for (int i = 0; i < N; i++)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using p = pair<int, int>;

int main() {
	string s;
	cin >> s;
	int t;
	cin >> t;

	int x = 0, y = 0, q = 0;
	rep(i, (int)s.size()) {
		if (s[i] == 'L') x--;
		else if (s[i] == 'R') x++;
		else if (s[i] == 'U') y++;
		else if (s[i] == 'D') y--;
		else if (s[i] == '?') q++;
	}

	int m = abs(x) + abs(y);
	int M = m + q;

	if (m <= q) {
		m = ((q - m) % 2);
	}
	else m -= q;

	cout << (t == 1 ? M : m) << endl;
	return 0;
}