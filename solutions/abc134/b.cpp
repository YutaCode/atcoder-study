#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	int n, d;
	cin >> n >> d;

	int ans = (n + 2 * d) / (2 * d + 1);

	cout << ans << endl;
	return 0;
}