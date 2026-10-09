#include<iostream>
#include<algorithm>
#include<vector>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int N, X;
	cin >> N >> X;
	string S = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	cout << S.at((X - 1) / N) << endl;

	return 0;
}