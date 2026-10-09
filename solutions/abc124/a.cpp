#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int a, b;
	cin >> a >> b;
	int ans = 0;

	if (a == b) cout << 2 * a << endl;
	else cout << max(a, b) + (max(a, b) - 1) << endl;

	return 0;
}