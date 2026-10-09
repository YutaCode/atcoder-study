#include<iostream>
#include<algorithm>
#include<vector>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int X, Y, N;
	cin >> X >> Y >> N;

	if (3 * X <= Y) cout << X * N << endl;
	else cout << Y * (N / 3) + X * (N % 3) << endl;

}