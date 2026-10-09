#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N, D;
	cin >> N >> D;
	vector<int> T(N);
	for (int i = 0; i < N; i++) cin >> T[i];

	int clicked = -1;

	for (int i = 0; i < N - 1; i++) {
		if (T[i + 1] - T[i] <= D) {
			clicked = T[i + 1];
			break;
		}
	}

	cout << clicked << endl;

	return 0;
}