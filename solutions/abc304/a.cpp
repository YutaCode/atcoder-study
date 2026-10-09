#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<string> S(N);
	vector<int>A(N);
	for (int i = 0; i < N; i++) cin >> S[i] >> A[i];

	int min = 10000000000;
	for (int i = 0; i < N; i++) {
		if (A[i] < min) min = A[i];
	}

	int minIndex = 0;
	for (int i = 0; i < N; i++) {
		if (A[i] == min) {
			minIndex = i;
			break;
		}
	}

	for (int i = minIndex; i < N; i++) {
		cout << S[i] << endl;
	}

	for (int i = 0; i < minIndex; i++) {
		cout << S[i] << endl;
	}
}