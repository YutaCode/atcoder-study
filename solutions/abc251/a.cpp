#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	string S;
	cin >> S;
	int N = S.size();

	if (N == 1) {
		rep(i, 6) cout << S;
	}
	else if (N == 2) {
		rep(i, 3) cout << S;
	}
	else if (N == 3) {
		rep(i, 2) cout << S;
	} 

	cout << endl;

	return 0;
}