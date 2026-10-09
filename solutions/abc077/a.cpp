#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	vector<vector<char>> C(2, vector<char>(3));

	rep(i, 2) {
		rep(j, 3) cin >> C.at(i).at(j);
	}

	rep(i, 2) {
		rep(j, 3) {
			if (C.at(i).at(j) != C.at(1 - i).at(2 - j)) {
				cout << "NO" << endl;
				return 0;
			}
		}
	}

	cout << "YES" << endl;
	return 0;
}
