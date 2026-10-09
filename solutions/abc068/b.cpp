#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <map> 
#include <unordered_map>
#include <queue>
#define rep(i, N) for (int i = 0; i < N; i++)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using p = pair<int, int>;

int cnt(int x) {
	int num = 0;
	while (x % 2 == 0) {
		x /= 2;
		num++;
	}

	return num;
}

int main() {
	int n;
	cin >> n;

	int ans = 0, div = -1;
	for (int i = 1; i <= n; i++) {
		if (div < cnt(i)) {
			div = cnt(i);
			ans = i;
		}
	}
	cout << ans << endl;
	return 0;
}