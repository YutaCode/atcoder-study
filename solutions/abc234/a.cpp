#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int f(int x) {
	return (x * x + 2 * x + 3);
}

int main() {
	int t;
	cin >> t;

	int64_t y = f(f(f(t) + t) + f(f(t)));

	cout << y << endl;

	return 0;
}
