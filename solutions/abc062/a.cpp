#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int x, y;
	cin >> x >> y;

	if (x == 2 && y == 2) {
		cout << "Yes" << endl;
	}
	else {
		if (x == 4 || x == 6 || x == 9 || x == 11) {
			if (y == 4 || y == 6 || y == 9 || y == 11) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
		else {
			if (y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10) cout << "Yes" << endl;
			else cout << "No" << endl;
		}
	}

	return 0;
}
