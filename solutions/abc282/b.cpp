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
	int ans = 0;

	rep(i, n) {
		rep(j, i) {
			bool p = true;
			rep(k, m) if (s[i][k] == 'x' && s[j][k] == 'x') p = false;
			if (p) ans++;
		} 
	}
	
	cout << ans << endl;
	return 0;
}