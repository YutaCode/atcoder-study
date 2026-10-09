#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N;
	string S;
	cin >> N;
	cin >> S;
	int good = -1;
	bool bad = false;

	for (int i = 0; i < N; i++) {
		if (S[i] == 'o') good = i;
		if (S[i] == 'x') {
			bad = true;
			break;
		}
	}

	if (good != -1 && bad == false) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}