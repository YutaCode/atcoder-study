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
	string s;
	cin >> s;

	ll ans = 0;
	rep(i, s.size()) {
		ans *= 26;
		ans += (s[i] - 'A' + 1);
	}

	cout << ans << endl;
	return 0;
}