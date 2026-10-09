#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	char c;
	cin >> c;
	string s = "abcdefghijklmnopqrstuvwxyz";

	rep(i, s.size() - 1) {
		if (s.at(i) == c) cout << s.at(i + 1) << endl;
	}

	return 0;
}