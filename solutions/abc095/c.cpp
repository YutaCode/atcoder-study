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

int main() {
	int a, b, c, x, y;
	cin >> a >> b >> c >> x >> y;

	int lim = max(x, y) * 2;
	int ans = (1 << 30);
	rep(i, lim + 1) {
		int cnt_a = max(0, x - i / 2);
		int cnt_b = max(0, y - i / 2);

		int cnt = a * cnt_a + b * cnt_b + c * i;
		ans = min(ans, cnt);
	}

	cout << ans << endl;
	return 0;
}