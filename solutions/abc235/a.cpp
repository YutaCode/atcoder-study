#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int x;
	cin >> x;

	int a = x / 100;
	int b = x / 10 - a * 10;
	int c = x % 10;

	cout << 111 * (a + b + c) << endl;

	return 0;
}
