#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;

	for (int i = 1; i < n; i++) {
		int ans = 0;
		rep(j, n - i) {
			if (s[j] == s[j + i]) break;
			ans++;
		}
		cout << ans << endl;
	}
	
	return 0;
}