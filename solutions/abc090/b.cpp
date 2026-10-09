#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

bool palindrome(string s) {
	string t = s;
	reverse(t.begin(), t.end());
	return (s == t);
}

int main() {
	int a, b;
	cin >> a >> b;

	int cnt = 0;
	for (int i = a; i <= b; i++) {
		string is = to_string(i);
		if (palindrome(is)) cnt++;
	}

	cout << cnt << endl;
	return 0;
}