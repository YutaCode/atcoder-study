#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	string s;
	cin >> s;

	sort(s.begin(), s.end());

	rep(i, s.size()) {
		if (s.at(i) != (i + '0')) {
			cout << i << endl;
			return 0;
		}
	}
	cout << 9 << endl;

	return 0;
}
