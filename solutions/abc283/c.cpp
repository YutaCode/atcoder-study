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

	int n = (int)s.size();
	int ans = n;
	
	rep(i, n - 1) {
		if (s[i] == '0' && s[i + 1] == '0') {
			ans--;
			i++;
		}
	}

	cout << ans << endl;
	return 0;
}