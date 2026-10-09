#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	string s, t;
	cin >> s >> t;

	vector<char> lst = { 'a', 't', 'c', 'o', 'd', 'e', 'r', '@' };
	int n = (int)s.size();
	bool ans = true;

	rep(i, n) {
		if (s[i] == '@') {
			if (find(lst.begin(), lst.end(), t[i]) == lst.end()) ans = false;
		}
		else if (t[i] == '@') {
			if (find(lst.begin(), lst.end(), s[i]) == lst.end()) ans = false;
		}
		else if (s[i] != t[i]) ans = false;
	}

	cout << (ans ? "You can win" : "You will lose") << endl;
	return 0;
}