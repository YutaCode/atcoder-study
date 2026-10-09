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
	string s, t;
	cin >> s >> t;
	char s1 = s[0];
	char s2 = s[1];
	char t1 = t[0];
	char t2 = t[1];

	int ss1 = (s1 - 'A');
	int ss2 = (s2 - 'A');
	int tt1 = (t1 - 'A');
	int tt2 = (t2 - 'A');

	int l1 = min(abs(ss1 - ss2), abs(5 - abs(ss1 - ss2)));
	int l2 = min(abs(tt1 - tt2), abs(5 - abs(tt1 - tt2)));

	if (l1 == l2) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}