#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <map>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	string s;
	cin >> s;

	bool p1 = false, p2 = false, p3 = true;

	if (s[0] == 'A') p1 = true;
	
	int cnt = 0, idx = 0;
	for (int i = 2; i <= (int)s.size() - 2; i++) {
		if (s[i] == 'C') {
			cnt++;
			idx = i;
		}
	}
	p2 = (cnt == 1);

	rep(i, (int)s.size()) {
		if (i == 0 || i == idx) continue;
		if (isupper(s[i])) p3 = false;
	}

	if (p1 && p2 && p3) cout << "AC" << endl;
	else cout << "WA" << endl;

	return 0;
}