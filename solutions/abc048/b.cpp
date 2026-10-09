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

int main() {
	ll a, b, x;
	cin >> a >> b >> x;

	ll m = (a + x - 1) / x;
	ll M = b / x;

	cout << M - m + 1 << endl;
	return 0;
}