#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
	int N; cin >> N; 
	vector<string> S(N);
	for (int i = 0; i < N; i++) cin >> S[i];

	int number_of_for = 0;
	for (int i = 0; i < N; i++) {
		if (S[i] == "For") number_of_for++;
	}

	if (number_of_for > N / 2) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}