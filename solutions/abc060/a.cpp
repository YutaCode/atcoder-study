#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	vector<string> X(3);
	rep(i, 3) cin >> X.at(i);

	if (X.at(0).at(X.at(0).size() - 1) == X.at(1).at(0) && X.at(1).at(X.at(1).size() - 1) == X.at(2).at(0)) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}
