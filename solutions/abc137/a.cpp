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

	int wa = a + b;
	int sa = a - b;
	int seki = a * b;

	cout << max(max(wa, sa), seki) << endl;

	return 0;
}