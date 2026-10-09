#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int x, y;
	cin >> x >> y;

	if (x == y) cout << x << endl;
	else cout << 3 - x - y << endl;

	return 0;
}