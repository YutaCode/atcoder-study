#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int n;
	cin >> n;
	vector<int64_t> a(n);
	rep(i, n) cin >> a[i];
	int q;
	cin >> q;

	rep(i, q) {
		int p; cin >> p;
		if (p == 1) {
			int k;
			int64_t x;
			cin >> k >> x;

			a[k - 1] = x;
		}

		if (p == 2) {
			int k; cin >> k;
			cout << a[k - 1] << endl;
		}
	}
	
	return 0;
}