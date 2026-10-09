#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	int N;
	cin >> N;
	bool is_true = true;

	int tmp = N % 10;
	N /= 10;

	while (N > 0) {
		if (N % 10 > tmp) {
			tmp = N % 10;
			N /= 10;
		}
		else {
			is_true = false;
			break;
		}
	}

	if (is_true) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}