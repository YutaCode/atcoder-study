#include <iostream>
#include<vector>
#include<string>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	string S;
	cin >> S;

	if (S.at(0) == S.at(1) && S.at(0) == S.at(2) && S.at(0) == S.at(3)) cout << "SAME" << endl;
	else cout << "DIFFERENT" << endl;

	return 0;
}
