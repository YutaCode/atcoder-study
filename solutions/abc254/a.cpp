#include<iostream>
#include<string>
#include<vector>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	string S;
	cin >> S;
	int N = S.size();

	cout << S.substr(N - 2, 2) << endl;

	return 0;
}