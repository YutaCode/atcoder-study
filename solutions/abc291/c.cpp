#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <map> 
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;

	map<pair<int, int>, int> a;
	int x = 0, y = 0;
	a.insert(make_pair(make_pair(x, y), -1));
	
	rep(i, n) {
		if (s[i] == 'R') x++;
		else if (s[i] == 'L') x--;
		else if (s[i] == 'U') y++;
		else if (s[i] == 'D') y--;

		a.insert(make_pair(make_pair(x, y), i));
	}

	if (a.size() != n + 1) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}