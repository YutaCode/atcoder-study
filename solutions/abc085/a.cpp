#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	string S;
	cin >> S;

	S.at(3) = '8';

	cout << S << endl;

	return 0;
}
