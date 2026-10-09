#include <iostream>
#include<vector>
#include<string>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int N, K;
	cin >> N >> K;
	vector<int> A(N + K, 0);
	rep(i, N) cin >> A.at(i);

	for (int i = K; i < K + N; i++) {
		cout << A.at(i) << " ";
	}

	cout << endl;

	return 0;
}
