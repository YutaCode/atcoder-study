#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int n, k;
	cin >> n >> k;

	cout << min(1, n % k);

	return 0;
}
