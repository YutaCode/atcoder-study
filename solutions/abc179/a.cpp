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

	if (s.at(s.size() - 1) == 's') {
		s.push_back('e');
		s.push_back('s');
	}
	else s.push_back('s');

	cout << s << endl;

	return 0;
}