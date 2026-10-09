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
	int h1, w1, h2, w2;
	cin >> h1 >> w1 >> h2 >> w2;

	if ((h1 - h2) * (h1 - w2) * (w1 - h2) * (w1 - w2) == 0) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}