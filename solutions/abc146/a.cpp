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
	vector<string> w = { "SUN","MON","TUE","WED","THU","FRI","SAT" };

	rep(i, w.size()) {
		if (s == w.at(i)) cout << 7 - i << endl;
	}

	return 0;
}