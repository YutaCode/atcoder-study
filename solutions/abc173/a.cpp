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

	if (n % 1000 != 0) cout << 1000 - n % 1000 << endl;
	else cout << 0 << endl;

	return 0;
}