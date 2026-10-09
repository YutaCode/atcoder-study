#include <iostream> // cout, endl, cin
#include <iomanip> //setprecision
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
#include <cmath> //sqrt
#define rep(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()

using namespace std;


int main() {
	int n;
	cin >> n;
	vector<int> x(n), y(n);
	rep(i, n) cin >> x[i] >> y[i];
	vector<int> idx;
	rep(i, n) idx.push_back(i);
	int cnt = 0;
	double ans = 0;
	do {
		double now = 0;
		cnt++;
		rep(i, n - 1) {
			double dx = (double)(x[idx[i + 1]] - x[idx[i]]);
			double dy = (double)(y[idx[i + 1]] - y[idx[i]]);
			now += sqrt(dx * dx + dy * dy);
		}
		ans += now;
	} while (next_permutation(all(idx)));
	cout << fixed << setprecision(10) << ans / cnt << endl;
	return 0;
}