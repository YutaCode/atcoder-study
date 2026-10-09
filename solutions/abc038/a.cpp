#include <iostream>
#include<vector>
#include<string>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	string S;
	cin >> S;
	int N = S.size();

	if (S.at(N - 1) == 'T') cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}
