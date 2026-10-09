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
	int n; cin >> n;
	vector <vector<int>> a(n, vector<int>(n));
	rep(i, n)rep(j, n) cin >> a[i][j];
	vector <vector<int>> b(n, vector<int>(n));
	rep(i, n)rep(j, n) cin >> b[i][j];

	bool x1 = true;
	rep(i, n)rep(j, n) if (a[i][j] == 1 && b[i][j] == 0) x1 = false;
	if (x1) {
		cout << "Yes" << endl;
		return 0;
	}

	vector <vector<int>> a1(n, vector<int>(n));
	rep(i, n)rep(j, n) a1[j][n - i - 1] = a[i][j];
	bool x2 = true;
	rep(i, n)rep(j, n) if (a1[i][j] == 1 && b[i][j] == 0) x2 = false;
	if (x2) {
		cout << "Yes" << endl;
		return 0;
	}

	vector <vector<int>> a2(n, vector<int>(n));
	rep(i, n)rep(j, n) a2[j][n - i - 1] = a1[i][j];
	bool x3 = true;
	rep(i, n)rep(j, n) if (a2[i][j] == 1 && b[i][j] == 0) x3 = false;
	if (x3) {
		cout << "Yes" << endl;
		return 0;
	}

	vector <vector<int>> a3(n, vector<int>(n));
	rep(i, n)rep(j, n) a3[j][n - i - 1] = a2[i][j];
	bool x4 = true;
	rep(i, n)rep(j, n) if (a3[i][j] == 1 && b[i][j] == 0) x4 = false;
	if (x4) {
		cout << "Yes" << endl;
		return 0;
	}

	cout << "No" << endl;
	return 0;
}