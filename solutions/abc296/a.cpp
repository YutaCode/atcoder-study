#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	string S;
	cin >> S;
	bool is_true = true;
	
	if (N == 1) is_true = true;
	else {
		for (int i = 0; i < N - 1; i++) {
			if (S[i + 1] == S[i]) {
				is_true = false;
				break;
			}
		}
	}

	if (is_true) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}