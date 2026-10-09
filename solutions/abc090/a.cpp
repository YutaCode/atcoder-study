#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	vector<string> c(3);
	rep(i, 3) cin >> c.at(i);

	rep(i, 3) cout << c.at(i).at(i);

	cout << endl;

	return 0;
}