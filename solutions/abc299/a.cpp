#include<iostream>
#include<vector>
using namespace std;

int main() {
	int N;
	string S;
	cin >> N;
	cin >> S;
	int first, second, third;

	for (int i = 0; i < N; i++) {
		if (S[i] == '*') {
			second = i;
			break;
		}
	}

	for (int i = 0; i < N; i++) {
		if (S[i] == '|') {
			first = i;
			break;
		}
	}

	for (int i = first + 1; i < N; i++) {
		if (S[i] == '|') {
			third = i;
			break;
		}
	}

	if (first < second && second < third) cout << "in" << endl;
	else cout << "out" << endl;

	return 0;
}