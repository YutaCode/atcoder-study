#include<iostream>
#include<algorithm>
#include<vector>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	string S;
	cin >> S;

	if (S.at(0) == S.at(1) && S.at(1) == S.at(2)) {
		cout << -1 << endl;
	}
	else if (S.at(0) == S.at(1)) {
		cout << S.at(2) << endl;
	}
	else if (S.at(0) == S.at(2)) {
		cout << S.at(1) << endl;
	}
	else cout << S.at(0) << endl;

	return 0;
}