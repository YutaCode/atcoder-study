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

	if (s.substr(s.size() - 2, 2) == "er") cout << "er" << endl;
	else cout << "ist" << endl;

	return 0;
}