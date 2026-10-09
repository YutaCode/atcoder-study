#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
	int n;
	cin >> n;

	int c0 = 0, c1 = 0, c2 = 0, c3 = 0;
	rep(i, n) {
		string s;
		cin >> s;
		if (s == "AC") c0++;
		else if (s == "WA") c1++;
		else if (s == "TLE") c2++;
		else if (s == "RE") c3++;
	}

	cout << "AC x " << c0 << endl;
	cout << "WA x " << c1 << endl;
	cout << "TLE x " << c2 << endl;
	cout << "RE x " << c3 << endl;

	return 0;
}