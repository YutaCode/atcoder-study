#include <iostream>
#include<vector>
#include<string>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int N;
	cin >> N;
	vector<int64_t> H(N);
	rep(i, N) cin >> H.at(i);
	int64_t maximum = -1;

	rep(i, N) {
		if (maximum < H.at(i)) maximum = H.at(i);
	}

	rep(i, N) {
		if (H.at(i) == maximum) {
			cout << i + 1 << endl;
			break;
		}
	}

	return 0;
}
