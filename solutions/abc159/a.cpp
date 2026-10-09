#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int n, m;
	cin >> n >> m;

	cout << n * (n - 1) / 2 + m * (m - 1) / 2 << endl;

	return 0;
}