#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	string s, t;
	cin >> s >> t;

	cout << (t.substr(0, t.size() - 1) == s ? "Yes" : "No") << endl;
	return 0;
}