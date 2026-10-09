#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <map>
#include <unordered_map>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	string s;
	cin >> s;
	int n = s.size();

	while (true) {
		bool x = false;
		if (s.size() < 2) break;
		rep(i, s.size() - 1) {
			if (s[i] == '0' && s[i + 1] == '1') {
				s = s.substr(0, i) + s.substr(i + 2);
				x = true;
				break;
			}
			else if (s[i] == '1' && s[i + 1] == '0') {
				s = s.substr(0, i) + s.substr(i + 2);
				x = true;
				break;
			}
		}
		if (!x) break;
	}
	
	cout << n - s.size() << endl;
	return 0;
}