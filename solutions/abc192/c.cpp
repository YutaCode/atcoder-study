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

ll func(ll a) {
	string x = to_string(a);

	sort(x.begin(), x.end()); 
	ll m = stoll(x);
	reverse(x.begin(), x.end());
	ll M = stoll(x);

	return M - m;
}

int main() {
	ll n, k;
	cin >> n >> k;

	rep(i, k) n = func(n);

	cout << n << endl;
	return 0;
}