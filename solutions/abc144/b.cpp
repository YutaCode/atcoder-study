#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<vector<int>> a(9, vector<int>(9));
	rep(i, 9)rep(j, 9) a[i][j] = (i + 1) * (j + 1);

	rep(i, 9)rep(j, 9) {
		if (n == a[i][j]) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}