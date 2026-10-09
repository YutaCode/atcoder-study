#include <iostream>
#include<vector>
#include<string>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int N, X;
	cin >> N >> X;
	vector<int> P(N, 0);
	rep(i, N) cin >> P.at(i);

	rep(i, N) {
		if (P.at(i) == X) {
			cout << i + 1 << endl;
			break;
		}
	}

	return 0;
}
