#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	vector<int> x(5);
	rep(i, 5) cin >> x.at(i);

	rep(i, 5) {
		if (x.at(i) == 0) {
			cout << i + 1 << endl;
			return 0;
		}
	}

	return 0;
}