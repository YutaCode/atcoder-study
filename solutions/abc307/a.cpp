#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int N; cin >> N;

	vector<int> A(7 * N);
	vector<int> B(N);
	fill(B.begin(), B.end(), 0);

	for (int i = 0; i < 7 * N; i++) cin >> A[i];

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < 7; j++) {
			B[i] += A[j + 7 * i];
		}
	}

	for (int i = 0; i < N - 1; i++) {
		cout << B[i] << " ";
	}
	cout << B[N - 1] << endl;
}