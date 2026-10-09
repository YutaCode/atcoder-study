#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
	int h, w;
	cin >> h >> w;
	vector<vector<int>> a(h, vector<int>(w));
	rep(i, h)rep(j, w) cin >> a[i][j];
	vector<vector<int>> b(w, vector<int>(h));

	rep(i, h)rep(j, w) b[j][i] = a[i][j];

	rep(i, w) {
		rep(j, h) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
}