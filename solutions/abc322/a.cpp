#include<iostream>
#include<string>
using namespace std;

int main() {
	int N;
	cin >> N;
	string S;
	cin >> S;

	bool is_true = false;

	for (int i = 0; i < N - 2; i++) {
		if (S.substr(i, 3) == "ABC") {
			cout << i + 1 << endl;
			is_true = true;
			break;
		}
	}

	if (!is_true) cout << -1 << endl;

	return 0;
}