#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<char> p(n, 'o');
	rep(i, m) {
		int a, b;
		cin >> a >> b;
		a--; b--;
		p[b] = 'x';
	}

	int ans = 0;
	int count = 0;
	rep(i, n) {
		if (p[i] == 'o') {
			count++;
			ans = i + 1;
		}
	}

	if (count == 1) cout << ans << endl;
	else cout << -1 << endl;
	return 0;
}