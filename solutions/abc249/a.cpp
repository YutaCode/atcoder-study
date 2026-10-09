#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int A, B, C, D, E, F, X;
	cin >> A >> B >> C >> D >> E >> F >> X;
	int adjacent;
	int takahashi = 0;
	int aoki = 0;

	rep(i, X / (A + C)) takahashi += A * B;
	takahashi += min(A, X % (A + C)) * B;

	rep(i, X / (D + F)) aoki += D * E;
	aoki += min(D, X % (D + F)) * E;

	if (takahashi > aoki) cout << "Takahashi" << endl;
	else if (aoki > takahashi) cout << "Aoki" << endl;
	else cout << "Draw" << endl;

	return 0;
}