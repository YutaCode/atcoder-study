#include<iostream>
#include<string>
#include<vector>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int L, R;
	cin >> L >> R;
	string S = "atcoder";

	cout << S.substr(L - 1, R - L + 1) << endl;

}