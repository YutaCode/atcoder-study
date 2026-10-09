#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int n, m;
	cin >> n >> m;
	vector<string> s(n);
	rep(i, n) cin >> s[i];
	vector<string> t(m);
	rep(i, m) cin >> t[i];

	int ans = 0;

	rep(i, n) {
		bool x = false;
		rep(j, m) {
			if (s[i].substr(s[i].size() - 3, 3) == t[j]) x = true;
		}
		if (x) ans++;
	}
	cout << ans << endl;

	return 0;
}