#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int n, a, x, y;
	cin >> n >> a >> x >> y;

	if (n <= a) cout << n * x << endl;
	else cout << a * x + (n - a) * y << endl;

	return 0;
}