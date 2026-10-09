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
	vector<vector<int>> x(n);
	rep(i, m) {
		int a, b;
		cin >> a >> b;
		a--; b--;
		x[a].push_back(b + 1);
		x[b].push_back(a + 1);
	}

	rep(i, n) {
		sort(x[i].begin(), x[i].end());
		int y = (int)x[i].size();
		cout << x[i].size() << " ";
		rep(j, y) cout << x[i][j] << " ";
		cout << endl;
	}

	return 0;
}