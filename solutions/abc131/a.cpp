#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	string s;
	cin >> s;

	rep(i, s.size() - 1) {
		if (s.at(i) == s.at(i + 1)) {
			cout << "Bad" << endl;
			return 0;
		}
	}

	cout << "Good" << endl;

	return 0;
}