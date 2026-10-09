#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
	using mount = pair<string, int>;
	int n;
	cin >> n;
	vector<mount> m(n);
	rep(i, n) {
		string s;
		int t;
		cin >> s >> t;
		m[i] = make_pair(s, t);
	}

	sort(m.begin(), m.end(), [](mount a, mount b) {
		return a.second > b.second;
		});

	cout << m[1].first << endl;
	return 0;
}