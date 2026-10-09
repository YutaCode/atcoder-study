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
	int n;
	cin >> n;

	vector<ll> a1((ll)pow(2, n) / 2LL);
	vector<ll> a2((ll)pow(2, n) / 2LL);

	rep(i, (ll)pow(2, n) / 2LL) cin >> a1[i];
	rep(i, (ll)pow(2, n) / 2LL) cin >> a2[i];

	auto idx1 = max_element(a1.begin(), a1.end());
	auto idx2 = max_element(a2.begin(), a2.end());

	ll idx11 = distance(a1.begin(), idx1);
	ll idx22 = distance(a2.begin(), idx2);

	if (a1[idx11] > a2[idx22]) {
		cout << idx22 + 1 + (ll)pow(2, n) / 2LL << endl;
		return 0;
	}
	else cout << idx11 + 1 << endl;
	return 0;
}