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
	int q;
	cin >> q;

	vector<int> a;

	rep(i, q) {
		int x, y;
		cin >> x >> y;

		if (x == 1) {
			a.push_back(y);
		}

		if (x == 2) {
			cout << a[a.size() - y] << endl;
		}
	}

	return 0;
}