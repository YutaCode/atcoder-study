#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	string s;
	cin >> s;
	int N = s.size();

	rep(i, N) {
		if (s.at(i) == ',') s.at(i) = ' ';
	}

	cout << s << endl;

	return 0;
}
