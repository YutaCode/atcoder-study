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

	cout << (s.at(2) == s.at(3) && s.at(4) == s.at(5) ? "Yes" : "No") << endl;

	return 0;
}