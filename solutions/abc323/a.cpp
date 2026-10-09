#include<iostream>
#include<vector>

using namespace std;

int main() {
	string S;
	cin >> S;
	int N = S.length();
	bool tmp = true;

	for (int i = 1; i < N; i += 2) {
		if (S[i] == '1') {
			tmp = false;
			break;
		}
	}

	if (tmp) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}