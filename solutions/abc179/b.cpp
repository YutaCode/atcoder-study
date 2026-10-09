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
	int n;
	cin >> n;
	vector<vector<int>> d(n, vector<int>(2));
	rep(i, n)rep(j, 2) cin >> d[i][j];

	rep(i, n - 2) {
		if (d[i][0] == d[i][1]) if (d[i + 1][0] == d[i + 1][1]) if (d[i + 2][0] == d[i + 2][1]) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;

}