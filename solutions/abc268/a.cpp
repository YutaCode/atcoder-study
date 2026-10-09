#include<iostream>
#include<algorithm>
#include<vector>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	vector<int> X(5);
	rep(i, 5) cin >> X.at(i);

	sort(X.begin(), X.end());
	int counter = 1;
	rep(i, 4) {
		if (X.at(i) != X.at(i + 1)) counter++;
	}

	cout << counter << endl;
}