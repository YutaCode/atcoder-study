#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int>P(N);
	for (int i = 0; i < N; i++) cin >> P[i];

	int max = -1;

	for (int i = 1; i < N; i++) {
		if (P[i] > max) max = P[i];
	}

	if (max < P[0]) cout << 0 << endl;
	else cout << max - P[0] + 1 << endl;
}