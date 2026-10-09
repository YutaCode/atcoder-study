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
	int n;
	cin >> n;
	vector<vector<pair<int, int>>> xy(n);
	rep(i, n) {
		int a;
		cin >> a;
		rep(j, a) {
			int x, y;
			cin >> x >> y;
			xy[i].push_back(make_pair(x, y));
		}
	}
	int ans = 0;
	rep(i, (1 << n)) {
		bitset<15> bit(i);
		bool is_ok = true;
		rep(j, n) {
			if (bit[j] == 0) continue;
			for (auto k : xy[j]) {
				if (k.second == 1 && bit[k.first - 1] == 0) is_ok = false;
				if (k.second == 0 && bit[k.first - 1] == 1) is_ok = false;
			}
		}
		if (is_ok) ans = max(ans, (int)bit.count());
	}
	cout << ans << endl;
	return 0;
}