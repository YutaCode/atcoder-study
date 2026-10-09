#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	string s;
	cin >> s;
	int ans = 0;

	rep(i, s.size()) {
		if (s.at(i) == '+') ans++;
		else if (s.at(i) == '-') ans--;
	}

	cout << ans << endl;

	return 0;
}
