#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int k;
	cin >> k;

	int even = k / 2;

	cout << even * (k - even) << endl;

	return 0;
}
