#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

bool palindrome(string s) {
	string t = s;
	reverse(t.begin(), t.end());
	if (s == t) return true;
	else return false;
}

int main() {
	int n;
	cin >> n;
	if (n == 0) {
		cout << "Yes" << endl;
		return 0;
	}

	while (n % 10 == 0) n /= 10;

	string s = to_string(n);

	if (palindrome(s)) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}