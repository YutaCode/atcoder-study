#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int n, r;
	cin >> n >> r;

	if (n < 10) cout << r + 100 * (10 - n) << endl;
	else cout << r << endl;

	return 0;
}