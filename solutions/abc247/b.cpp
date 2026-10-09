#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <map>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	vector<string> s(n), t(n);
	rep(i, n) cin >> s[i] >> t[i];

	rep(i, n) {
		bool ps = false, pt = false; //i番目の人のs,tがあだ名になり得るか falseならなることができる
		rep(j, n) {
			if (i == j) continue;
			if (s[i] == s[j] || s[i] == t[j]) ps = true; 
			if (t[i] == s[j] || t[i] == t[j]) pt = true;
		}
		if (ps && pt) {
			cout << "No" << endl;
			return 0;
		}
	}

	cout << "Yes" << endl;
	return 0;
}