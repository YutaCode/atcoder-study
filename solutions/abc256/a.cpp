#include<iostream>
#include<algorithm>
#include<vector>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int N;
	cin >> N;
	int64_t ans = 1LL;

	rep(i, N) ans *= 2;

	cout << ans << endl;

	return 0;
}