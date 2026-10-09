#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	long long n;
	cin >> n;

	long long x = 1LL;
	rep(i, 31) x *= 2;

	if (-x <= n && n < x) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
