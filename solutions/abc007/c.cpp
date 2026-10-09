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
using Graph = vector<vector<int>>;

int main() {
	int r, c;
	cin >> r >> c;
	int sy, sx, gy, gx;
	cin >> sy >> sx >> gy >> gx;
	sy--; sx--; gy--; gx--;
	vector<vector<char>> s(r, vector<char>(c));
	vector<vector<int>> d(r, vector<int>(c, -1));
	rep(i, r)rep(j, c) cin >> s[i][j];

	queue<int> qx, qy;
	qx.push(sx);
	qy.push(sy);
	d[sy][sx] = 0;
	vector<int> dx = { -1, 0, 1, 0 };
	vector<int> dy = { 0, 1, 0, -1 };

	while (!qx.empty()) {
		int x = qx.front();
		int y = qy.front();
		qx.pop();
		qy.pop();

		rep(i, 4) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx == -1 || nx == c || ny == -1 || ny == r || d[ny][nx] != -1 || s[ny][nx] == '#') continue;
			qx.push(nx);
			qy.push(ny);
			d[ny][nx] = d[y][x] + 1;
		}
	}

	cout << d[gy][gx] << endl;
	return 0;
}
