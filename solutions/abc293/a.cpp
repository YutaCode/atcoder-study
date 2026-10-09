#include<iostream>
#include<vector>
using namespace std;

int main() {
	string S;
	cin >> S;
	int N = S.length();

	for (int i = 1; i < N / 2 + 1; i++) {
		int tmp = S[2 * i - 2];
		S[2 * i - 2] = S[2 * i - 1];
		S[2 * i - 1] = tmp;
	}
	cout << S << endl;

	return 0;
}