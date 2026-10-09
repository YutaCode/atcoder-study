#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	string s;
	cin >> s;
	int n = (int)s.size();

	string t;
	rep(i, n) t += 'x';

	cout << t << endl;
	return 0;
}