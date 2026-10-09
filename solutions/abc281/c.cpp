#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <map> 
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int n; ll t;
	cin >> n >> t;
	
	vector<ll> a(n);
	rep(i, n) {
		ll ai;
		cin >> ai;

		if (i == 0) {
			a[i] = ai;
			continue;
		}

		a[i] = a[i - 1] + ai;
	}

	ll now = t % a[n - 1];

	auto it = lower_bound(a.begin(), a.end(), now);
	int index = distance(a.begin(), it);

	if (index != 0) cout << index + 1 << " " << now - a[index - 1] << endl;
	else cout << index + 1 << " " <<  now << endl;
	return 0;
}