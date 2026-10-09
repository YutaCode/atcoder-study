#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;

	if (n % 2 != 0) {
		cout << "No" << endl;
		return 0;
	}

	string s1 = s.substr(0, n / 2);
	string s2 = s.substr(n / 2, n / 2);

	if (s1 == s2) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}