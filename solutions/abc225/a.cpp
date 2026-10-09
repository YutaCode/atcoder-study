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

	if (s.at(0) == s.at(1) && s.at(0) == s.at(2)) cout << 1 << endl;
	else if (s.at(0) == s.at(1) || s.at(0) == s.at(2) || s.at(1) == s.at(2)) cout << 3 << endl;
	else cout << 6 << endl;

	return 0;
}
