#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	string s, t;
	cin >> s >> t;

	int counter = 0;
	rep(i, 3) {
		if (s.at(i) == t.at(i)) counter++;
	}

	cout << counter << endl;

	return 0;
}