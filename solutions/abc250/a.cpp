#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int H, W, R, C;
	cin >> H >> W >> R >> C;
	int adjacent;

	if (H == 1 && W == 1) {
		cout << 0 << endl;
		return 0;
	}

	if (H == 1) {
		adjacent = 2;
		if (C == 1 || C == W) adjacent--;
		cout << adjacent << endl;
		return 0;
	}

	if (W == 1) {
		adjacent = 2;
		if (R == 1 || R == H) adjacent--;
		cout << adjacent << endl;
		return 0;
	}

	adjacent = 4;
	if (R == 1 || R == H) adjacent--;
	if (C == 1 || C == W) adjacent--;

	cout << adjacent << endl;

	return 0;
}