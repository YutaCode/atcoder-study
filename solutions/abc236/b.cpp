#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(4 * n - 1);
	rep(i, 4 * n - 1) cin >> a[i];

	vector<int> num(n, 0);
	rep(i, 4 * n - 1) num[a[i] - 1]++;

	rep(i, n) if (num[i] == 3) {
		cout << i + 1 << endl;
		return 0;
	}
}