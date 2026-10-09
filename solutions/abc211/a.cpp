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

	cout << fixed << setprecision(7) << ((double)a - (double)b) / 3.0 + b << endl;

	return 0;
}