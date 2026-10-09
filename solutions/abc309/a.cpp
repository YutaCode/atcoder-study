#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	bool adjacent = false;

	if (A == 1) {
		if (B == 2) adjacent = true;
	}

	if (A == 2) {
		if (B == 3) adjacent = true;
	}

	if (A == 4) {
		if (B == 5) adjacent = true;
	}

	if (A == 5) {
		if (B == 6) adjacent = true;
	}

	if (A == 7) {
		if (B == 8) adjacent = true;
	}

	if (A == 8) {
		if (B == 9) adjacent = true;
	}

	if (adjacent) cout << "Yes" << endl;
	else cout << "No" << endl;

}