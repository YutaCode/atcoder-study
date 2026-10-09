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

	sort(s.begin(), s.end());

	if (s.at(0) == s.at(1) && s.at(2) == s.at(3) && s.at(0) != s.at(2)) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}