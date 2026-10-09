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
	string s;
	cin >> s;

	int ans = -1;

	rep(i, (int)s.size()) {
		if (s[i] == '1') {
			ans = i;
			break;
		}
	}
	if (ans % 2 == 0) cout << "Takahashi" << endl;
	else cout << "Aoki" << endl;

	return 0;
}