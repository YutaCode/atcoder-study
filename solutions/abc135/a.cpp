#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int64_t a, b;
	cin >> a >> b;

	cout << ((a + b) % 2 == 0 ? to_string((a + b) / 2) : "IMPOSSIBLE") << endl;

	return 0;
}