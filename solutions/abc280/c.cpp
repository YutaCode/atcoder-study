#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <map> 
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	string s, t;
	cin >> s >> t;

	int n = (int)s.size();

	rep(i, n) {
		if (s[i] != t[i]) {
			cout << i + 1 << endl;
			return 0;
		}
	}
	
	cout << n + 1 << endl;
	return 0;
}