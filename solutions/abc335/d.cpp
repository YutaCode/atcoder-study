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
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	vector<vector<string>> a(n, vector<string>(n, "0"));
	
	int x = 0, y = 0;
	int num = 1;

	int dx[4] = { 0, 1, 0, -1 };
	int dy[4] = { 1, 0, -1, 0 };
	int dir_idx = 0;

	while (num <= n * n) {
		a[x][y] = to_string(num);
		num++;

		int x_next = x + dx[dir_idx];
		int y_next = y + dy[dir_idx];

		if (x_next >= 0 && x_next < n && y_next >= 0 && y_next < n && a[x_next][y_next] == "0") {
			x = x_next;
			y = y_next;
		}
		else {
			// 方向を変える
			dir_idx = (dir_idx + 1) % 4;
			x += dx[dir_idx];
			y += dy[dir_idx];
		}
	}


	a[(n - 1) / 2][(n - 1) / 2] = "T";

	rep(i, n){
		rep(j, n) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}