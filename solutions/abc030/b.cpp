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
	int n, m;
	cin >> n >> m;

	int hour = n * 60 + m;
	int min = m;

	double a1 = (hour % 720) * 0.5;
	double a2 = (min % 60) * 6.;

	if (abs(a1 - a2) > 180) cout << 360 - abs(a1 - a2) << endl;
	else cout << abs(a1 - a2) << endl;
	return 0;
}