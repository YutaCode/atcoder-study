#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	string s;
	cin >> s;
	int counter = 0;

	if (s.at(0) == 'R') {
		counter++;
		if (s.at(1) == 'R') {
			counter++;
			if (s.at(2) == 'R') counter++;
		}
	}
	else if (s.at(1) == 'R') {
		counter++;
		if (s.at(2) == 'R') counter++;
	}
	else if (s.at(2) == 'R') counter++;

	cout << counter << endl;

	return 0;
}