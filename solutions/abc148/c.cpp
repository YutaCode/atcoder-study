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
	ll a, b;
	cin >> a >> b;

	for (ll i = a; i <= a * b; i += a) {
		if (i % b == 0) {
			cout << i << endl;
			return 0;
		}
	}
}