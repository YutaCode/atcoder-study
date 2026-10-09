#include<iostream>
#include<vector>
using namespace std;

bool similarity(char x, char y) {
	if (x == y) return true;
	if (x == 'l' && y == '1') return true;
	if (x == '1' && y == 'l') return true;
	if (x == 'o' && y == '0') return true;
	if (x == '0' && y == 'o') return true;

	return false;
}

int main() {
	int N;
	string S, T;
	cin >> N;
	cin >> S;
	cin >> T;

	bool is_true = true;
	for (int i = 0; i < N; i++) {
		is_true = similarity(S[i], T[i]);
		if (!is_true) {
			cout << "No" << endl;
			break;
		}
	}
	if (is_true) cout << "Yes" << endl;

}