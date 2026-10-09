#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	rep(i, n) cin >> a[i];
	vector<char> p(n, 'x');
	vector<int> ans;

	rep(i, n) {
		if (p[i] == 'x') p[a[i] - 1] = 'o';
	}

	int k = 0;
	rep(i, n) if (p[i] == 'x') {
		k++;
		ans.push_back(i + 1);
	}

	cout << k << endl;
	rep(i, ans.size()) cout << ans[i] << " ";
	cout << endl;

	return 0;
}