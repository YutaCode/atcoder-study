#include <iostream> // cout, endl, cin
#include <string> // string, to_string, stoi
#include <vector> // vector
#include <algorithm> // min, max, swap, sort, reverse, lower_bound, upper_bound
#include <utility> // pair, make_pair
#include <tuple> // tuple, make_tuple
#include <cstdint> // int64_t, int*_t
#include <cstdio> // printf
#include <map> // map
#include <queue> // queue, priority_queue
#include <set> // set
#include <stack> // stack
#include <deque> // deque
#include <unordered_map> // unordered_map
#include <unordered_set> // unordered_set
#include <bitset> // bitset
#include <cctype> // isupper, islower, isdigit, toupper, tolower
#include <cmath> // sqrt

using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
using ll = long long;
using Graph = vector<vector<int>>;

ll digits(ll x) {
	ll ans = 0;
	while (x > 0) {
		ans++;
		x /= 10;
	}
	return ans;
}

int main() {
	ll n;
	cin >> n;
	int ans = 10;

	for (ll i = 1; i <= sqrt(n); i++) {
		if (n % i != 0) continue;
		if (digits(n / i) < ans) ans = digits(n / i);
	}

	cout << ans << endl;
	return 0;
}