#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	vector<vector<int>> a(3, vector<int>(3));
	rep(i, 3)rep(j, 3) cin >> a[i][j];

	vector<vector<bool>> p(3, vector<bool>(3, false)); //穴が開いていたらtrue
	int n;
	cin >> n;

	rep(i, n) {
		int b;
		cin >> b;
		rep(j, 3)rep(k, 3)if (b == a[j][k]) p[j][k] = true;
	}

	//横の列を調べる
	rep(i, 3)if (p[i][0] && p[i][1] && p[i][2]) {
		cout << "Yes" << endl;
		return 0;
	}

	//縦の列を調べる
	rep(i, 3)if (p[0][i] && p[1][i] && p[2][i]) {
		cout << "Yes" << endl;
		return 0;
	}

	//斜めの列を調べる
	if (p[0][0] && p[1][1] && p[2][2]) {
		cout << "Yes" << endl;
		return 0;
	}
	else if (p[0][2] && p[1][1] && p[2][0]) {
		cout << "Yes" << endl;
		return 0;
	}

	cout << "No" << endl;
	return 0;
}