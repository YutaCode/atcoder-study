#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <map>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	string s;
	cin >> s;

	rep(i, 26) {
		char alpha = i + 'a';

		if (s.find(alpha) == string::npos) {
			cout << alpha << endl;
			return 0;
		}
	}

	cout << "None" << endl;
	return 0;
}