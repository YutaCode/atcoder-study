#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>

using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
	stack<int> x;
	while (true) {
		int a;
		cin >> a;
		x.push(a);
		if (a == 0) break;
	}
	while (!x.empty()) {
		int now = x.top();
		cout << now << endl;
		x.pop();
	}
	return 0;
}