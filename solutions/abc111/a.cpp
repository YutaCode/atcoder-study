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

	rep(i, s.size()) {
		if (s.at(i) == '1') s.at(i) = '9';
		else if (s.at(i) == '9') s.at(i) = '1';
	}

	cout << s << endl;

	return 0;
}
