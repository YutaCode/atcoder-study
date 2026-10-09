#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
using ll = long long;

using Graph = vector<vector<int>>;
Graph tree;
vector<int> score;
vector<bool> seen;

void dfs(int v) {
	seen[v] = true;
	for (int nv : tree[v]) {
		if (seen[nv]) continue;
		score[nv] += score[v];
		dfs(nv);
	}
}

int main() {
	int n, q;
	cin >> n >> q;
	tree.resize(n);
	seen.assign(n, false);
	score.assign(n, 0);
	rep(_, n - 1) {
		int a, b;
		cin >> a >> b;
		a--; b--;
		tree[a].push_back(b);
		tree[b].push_back(a);
	}
	rep(_, q) {
		int v, x;
		cin >> v >> x;
		v--;
		score[v] += x;
	}
	dfs(0);
	for (int s : score) cout << s << " ";
	cout << endl;
	return 0;
}