#include<iostream>
#include<algorithm>
#include<vector>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int R, C;
	cin >> R >> C;
	vector<vector<int>> A(2, vector<int>(2));
	rep(i, 2) {
		rep(j, 2) {
			cin >> A.at(i).at(j);
		}
	}

	cout << A.at(R - 1).at(C - 1) << endl;

	return 0;
}