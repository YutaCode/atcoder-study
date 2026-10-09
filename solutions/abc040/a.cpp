#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int n, x;
	cin >> n >> x;

	cout << min(x - 1, n - x) << endl;

	return 0;
}
