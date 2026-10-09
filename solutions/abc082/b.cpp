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

	sort(s.begin(), s.end());
	sort(t.begin(), t.end());
	reverse(t.begin(), t.end());

	if (s < t) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}