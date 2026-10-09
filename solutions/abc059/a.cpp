#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	vector<string> S(3);
	rep(i, 3) cin >> S.at(i);

	rep(i, 3) S.at(i).at(0) = toupper(S.at(i).at(0));

	rep(i, 3) cout << S.at(i).at(0);

	cout << endl;

	return 0;
}
