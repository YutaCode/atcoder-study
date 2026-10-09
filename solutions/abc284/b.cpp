#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int t;
	cin >> t;

	rep(i, t) {
		int n;
		cin >> n;
		vector<int>a(n);
		rep(j, n) cin >> a[j];

		int ans = 0;

		rep(j, n) if (a[j] % 2 != 0) ans++;

		cout << ans << endl;
	}
	

	return 0;
}