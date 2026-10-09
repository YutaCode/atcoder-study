#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (a == b) cout << c << endl;
	else if (a == c) cout << b << endl;
	else if (b == c) cout << a << endl;
	else cout << 0 << endl;

	return 0;
}