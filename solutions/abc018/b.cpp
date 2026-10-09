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
	int n;
	cin >> n;

	rep(i, n) {
		int l, r;
		cin >> l >> r;
		l--; r--;
		reverse(s.begin() + l, s.begin() + r + 1);
	}

	cout << s << endl;
	return 0;
}