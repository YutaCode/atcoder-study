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
	int n;
	cin >> n;

	vector<ll> o;
	vector<ll> e;

	rep(i, n) {
		ll a;
		cin >> a;

		if (a % 2 == 0) e.push_back(a);
		else o.push_back(a);
	}
	sort(o.rbegin(), o.rend());
	sort(e.rbegin(), e.rend());

	if (o.size() < 2 && e.size() < 2) cout << -1 << endl;
	else if (o.size() < 2) cout << e[0] + e[1] << endl;
	else if (e.size() < 2) cout << o[0] + o[1] << endl;
	else cout << max(o[0] + o[1], e[0] + e[1]) << endl;
	return 0;
}