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

int main() {
	ll n, a, b;
	cin >> n >> a >> b;

	cout << n / (a + b) * a + min(n % (a + b), a) << endl;
	return 0;
}