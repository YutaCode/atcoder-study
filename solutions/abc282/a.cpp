#include <iostream>
#include<vector>
#include<string>
using namespace std;
#define rep(i, N) for (int i = 1; i < N; i++)

int main() {
	int K;
	cin >> K;
	string eng = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	cout << eng.substr(0, K) << endl;

	return 0;
}
