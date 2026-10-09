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

	if (s == "AAA" || s == "BBB") cout << "No" << endl;
	else cout << "Yes" << endl;

	return 0;
}