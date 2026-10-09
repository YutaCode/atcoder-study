#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <map> 
#include <unordered_map>
#define rep(i, N) for (int i = 0; i < N; i++)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using p = pair<int, int>;

int main() {
	int n;
	cin >> n;

	ll tmp = 0LL;
	rep(i, n) {
		ll a;
		cin >> a;

		tmp += a;
		if (tmp < 0LL) tmp = 0LL;
	}

	cout << tmp << endl;
	return 0;
}