#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {
	long long A, B;
	cin >> A >> B;
	long long A_tmp = A;
	long long B_tmp = B;

	for (int i = 1; i < B_tmp; i++) {
		A *= A_tmp;
	}

	for (int j = 1; j < A_tmp; j++) {
		B *= B_tmp;
	}

	cout << A + B << endl;

	return 0;
}