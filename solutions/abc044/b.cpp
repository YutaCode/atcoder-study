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
	string w;
	cin >> w;

	bool b = true; //wが美しいかどうか
	int n = (int)w.size();

	if (n % 2 == 1) b = false;

	sort(w.begin(), w.end());

	rep(i, n / 2) if (w[2 * i] != w[2 * i + 1]) b = false;

	if (b) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}