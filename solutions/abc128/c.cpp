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
#define rep(i, n) for (int i = 0; i < n; i++)

using namespace std;


int main() {
	int n, m;
	cin >> n >> m;
	vector<bitset<10>> s(m, 0);
	vector<int> p(m);

	rep(i, m) {
		int k;
		cin >> k;
		rep(j, k) {
			int ss;
			cin >> ss;
			s[i].set(ss - 1);
		}
	}
	rep(i, m) cin >> p[i];

	int ans = 0;
	for (int i = 0; i < (1 << n); i++) {
		bitset<10> bit(i);
		bool is_ok = true;
		rep(j, m) {
			bitset<10> b = (bit & s[j]);
			if (b.count() % 2 != p[j]) is_ok = false;
		}
		if (is_ok) ans++;
	}
	cout << ans << endl;
	return 0;
}