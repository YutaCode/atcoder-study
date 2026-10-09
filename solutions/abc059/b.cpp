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
	string a, b;
	cin >> a >> b;
	string ans = "";

	if ((int)a.size() > (int)b.size()) ans = "GREATER";
	if ((int)a.size() < (int)b.size()) ans = "LESS";
	if ((int)a.size() == (int)b.size()) {
		if (a < b) ans = "LESS";
		else if (a > b) ans = "GREATER";
		else ans = "EQUAL";
	}

	cout << ans << endl;
	return 0;
}