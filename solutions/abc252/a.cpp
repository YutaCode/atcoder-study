#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	string S = "abcdefghijklmnopqrstuvwxyz";
	int N;
	cin >> N;

	cout << S.at(N - 97) << endl;

	return 0;
}