#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	vector<int> X(3);
	rep(i, 3) cin >> X.at(i);

	sort(X.begin(), X.end());
	int counter = 1;

	rep(i, 2) {
		if (X.at(i) != X.at(i + 1)) counter++;
	}

	cout << counter << endl;

	return 0;
}
