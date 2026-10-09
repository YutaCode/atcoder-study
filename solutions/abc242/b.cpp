#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
	string s;
	cin >> s;
	int n = (int)s.size();
	vector<char> p;

	rep(i, n) p.push_back(s[i]);
	sort(p.begin(), p.end());

	rep(i, n) cout << p[i];

	cout << endl;
	return 0;
}