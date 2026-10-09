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
	int x, y;
	cin >> x >> y;

	cout << max(0,((y - x + 9) / 10))  << endl;

	return 0;
}
