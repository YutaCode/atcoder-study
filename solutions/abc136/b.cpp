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

bool odd(int x) {
	int keta = 0;
	while (x >= 10) {
		x /= 10;
		keta++;
	}

	return keta % 2 == 0;
}

int main() {
	int n;
	cin >> n;

	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (odd(i)) ans++;
	}
	cout << ans << endl;
	return 0;
}