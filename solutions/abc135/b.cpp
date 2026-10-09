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
	vector<int> p(n);
	rep(i, n) cin >> p[i];

	vector<int> q = p;
	sort(q.begin(), q.end());

	int wrong = 0;
	rep(i, n) {
		if (p[i] != q[i]) wrong++;
	}

	if (wrong == 0 || wrong == 2) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}