#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	vector<string> S(3);
	rep(i, 3) cin >> S.at(i);

	cout << "A" << S.at(1).at(0) << "C" << endl;

	return 0;
}
