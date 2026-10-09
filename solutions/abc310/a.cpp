#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int N, P, Q;
	cin >> N >> P >> Q;
	vector<int> D(N);
	for (int i = 0; i < N; i++) cin >> D[i];

	int m = 1000000;
	for (int i = 0; i < N; i++) {
		if (D[i] < m) m = D[i];
	}

	cout << min(Q + m, P) << endl;

	return 0;
}