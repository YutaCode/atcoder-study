#include<iostream>
#include<vector>
using namespace std;

int main() {
	long long N;
	string S;
	cin >> N;
	cin >> S;
	int takahashi = 0;
	int aoki = 0;

	for (int i = 0; i < N; i++) {
		if (S[i] == 'T') takahashi++;
		if (S[i] == 'A') aoki++;

		if (takahashi == (N + 1) / 2) {
			cout << "T" << endl;
			break;
		}
		if (aoki == (N + 1) / 2) {
			cout << "A" << endl;
			break;
		}
	}
}