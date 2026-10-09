#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> A(N);
	vector<int> a;
	for (int i = 0; i < N; i++) cin >> A[i];

	for (int i = 0; i < N; i++) {
		if (A[i] % 2 == 0) {
			a.push_back(A[i]);
		}
	}

	for (int i = 0; i < a.size() - 1; i++) cout << a[i] << " ";
	cout << a[a.size() - 1] << endl;

	//if (is_true) cout << "Yes" << endl;
	//else cout << "No" << endl;

	return 0;
}