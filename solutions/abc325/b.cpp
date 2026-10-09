#include<iostream>
#include<vector>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> W(N), X(N);

	for (int i = 0; i < N; i++) {
		cin >> W[i] >> X[i];
	}

	int max = -1;
	int tmp = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (X[j] >= X[i] && X[j] - X[i] <= 8){
				tmp += W[j];
			}
			if (X[j] < X[i] && X[i] - X[j] >= 16)
				tmp += W[j];
		}
		if (tmp > max) {
			max = tmp;
		}
		tmp = 0;
	}
	
	cout << max << endl;
}
