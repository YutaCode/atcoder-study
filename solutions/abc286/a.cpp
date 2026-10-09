#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	int N, P, Q, R, S;
	cin >> N >> P >> Q >> R >> S; 
	vector<int> A(N);
	for (int i = 0; i < N; i++) cin >> A[i];

	vector<int> B(N);
	for (int i = 0; i < P - 1; i++) {
		B[i] = A[i];
	}
	for (int i = P - 1; i < Q; i++) {
		B[i] = A[i + R - P];
	}
	for (int i = Q; i < R - 1; i++) {
		B[i] = A[i];
	}
	for (int i = R - 1; i < S; i++) {
		B[i] = A[i - R + P];
	}
	for (int i = S; i < N; i++) {
		B[i] = A[i];
	}

	for (int i = 0; i < N - 1; i++) cout << B[i] << " ";
	cout << B[N - 1] << endl;

	return 0;
}