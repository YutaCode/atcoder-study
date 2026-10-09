#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	vector<int> S(8);
	for (int i = 0; i < 8; i++) cin >> S[i];

	bool is_true1 = true;
	bool is_true2 = true;
	bool is_true3 = true;

	for (int i = 0; i < 7; i++) {
		if (S[i] > S[i + 1]) {
			is_true1 = false;
			break;
		}
	}

	int max, min;
	max = -1; min = 1001;
	for (int i = 0; i < 8; i++) {
		if (S[i] > max) max = S[i];
		if (S[i] < min) min = S[i];
	}
	if (100 <= min && max <= 675) is_true2 = true;
	else is_true2 = false;

	for (int i = 0; i < 8; i++) {
		if (S[i] % 25 != 0) {
			is_true3 = false;
			break;
		}
	}


	if (is_true1 && is_true2 && is_true3) cout << "Yes" << endl;
	else cout << "No" << endl;

}