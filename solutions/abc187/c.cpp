#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <map> 
#include <unordered_map>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	vector<string> s(n);
	rep(i, n) cin >> s[i];

	sort(s.begin(), s.end());
	s.erase(unique(s.begin(), s.end()), s.end());

	rep(i, s.size()) {
		if (s[i][0] == '!') s[i] = s[i].substr(1, s[i].size() - 1);
	}

	sort(s.begin(), s.end());

	rep(i, s.size() - 1) {
		if (s[i] == s[i + 1]) {
			cout << s[i] << endl;
			return 0;
		}
	}

	cout << "satisfiable" << endl;
	return 0;
}