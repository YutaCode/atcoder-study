#include<iostream>
#include<vector>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; i++) cin >> A[i];

	bool equal = true;

	for (int i = 0; i < N; i++) {
		if (A[i] != A[0]) {
			equal = false;
			break;
		}
	}

	if (equal) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}