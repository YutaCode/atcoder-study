#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int n, q;
	cin >> n >> q;
	vector<int> p(n, 0);

	rep(i, q) {
		int a, b;
		cin >> a >> b;

		if (a == 1) p[b - 1]++;
		if (a == 2) p[b - 1] += 2;
		if (a == 3) {
			if (p[b - 1] >= 2) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
	}

	return 0;
}