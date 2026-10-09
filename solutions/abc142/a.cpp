#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int n;
	cin >> n;

	int odd = (n + 1) / 2;

	cout << (double)odd / (double)n << endl;

	return 0;
}