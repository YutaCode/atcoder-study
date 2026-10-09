#include <iostream>
#include<vector>
#include<string>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int H, W;
	cin >> H >> W;
	vector<string> S(H);
	rep(i, H) cin >> S.at(i);

	int counter = 0;

	rep(i, H) {
		rep(j, W) {
			if (S.at(i).at(j) == '#') counter++;
		}
	}

	cout << counter << endl;

	return 0;
}
