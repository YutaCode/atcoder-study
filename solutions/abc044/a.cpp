#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int N, K, X, Y;
	cin >> N >> K >> X >> Y;

	if (N <= K) cout << N * X << endl;
	else cout << K * X + (N - K) * Y << endl;

	return 0;
}
