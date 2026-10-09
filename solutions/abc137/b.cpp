#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	int k, x;
	cin >> k >> x;

	for (int i = x - k + 1; i <= x + k - 1; i++) {
		cout << i << " ";
	}

	cout << endl;
	return 0;
}