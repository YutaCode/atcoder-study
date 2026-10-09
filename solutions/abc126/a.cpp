#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int n, k;
	string s;
	cin >> n >> k >> s;

	s.at(k - 1) = tolower(s.at(k - 1));

	cout << s << endl;

	return 0;
}