#include<iostream>
#include<algorithm>
#include<vector>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int N, M, X, T, D;
	cin >> N >> M >> X >> T >> D;

	cout << T - max(0, D * (X - M)) << endl;

	return 0;
}