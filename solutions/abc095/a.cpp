#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	string s;
	cin >> s;

	int counter = 0;
	rep(i, 3) {
		if (s.at(i) == 'o') counter++;
	}

	cout << 700 + 100 * counter << endl;

	return 0;
}
