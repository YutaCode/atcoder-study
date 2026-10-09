#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <map> 
#include <unordered_map>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	ll l;
	cin >> l;

	ll ans = 1;

	rep(i, 11) {
		ans *= (l - 1 - i);
		ans /= (i + 1);
	}

	cout << ans << endl;
}