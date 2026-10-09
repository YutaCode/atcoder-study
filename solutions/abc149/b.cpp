#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	long long a, b, k;
	cin >> a >> b >> k;

	if (a + b <= k) cout << "0 0" << endl;
	else if (a <= k) cout << "0 " << a + b - k << endl;
	else cout << a - k << " " << b << endl;
	return 0;
}