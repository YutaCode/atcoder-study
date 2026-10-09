#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cctype>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int n;
	cin >> n;
	vector<int64_t> s(n);
	rep(i, n) cin >> s[i];
	vector<int64_t> ans;

	ans.push_back(s[0]);

	rep(i, n - 1) {
		ans.push_back(s[i + 1] - s[i]);
	}

	rep(i, n) cout << ans[i] << " ";
	cout << endl;

	return 0;
}