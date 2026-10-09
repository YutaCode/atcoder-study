#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	vector<int> a(10);
	rep(i, 10) cin >> a.at(i);

	int pointer = 0;

	rep(i, 3) {
		pointer = a.at(pointer);
	}

	cout << pointer << endl;

	return 0;
}
