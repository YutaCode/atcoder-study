#include <iostream>
#include<vector>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int N;
	cin >> N;
	vector<string> S(N);
	rep(i, N) cin >> S[i];

	rep(i, N) {
		cout << S[N - 1 - i] << endl;
	}

	return 0;
}
