#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int n, x, t;
	cin >> n >> x >> t;

	if (n % x == 0) cout << n / x * t << endl;
	else cout << (n / x + 1) * t << endl;

	return 0;
}