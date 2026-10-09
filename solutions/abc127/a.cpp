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

	if (a >= 13) cout << b << endl;
	else if (a >= 6) cout << b / 2 << endl;
	else cout << 0 << endl;

	return 0;
}