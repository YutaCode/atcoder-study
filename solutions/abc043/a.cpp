#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int N;
	cin >> N;

	cout << N * (N + 1) / 2 << endl;

	return 0;
}
