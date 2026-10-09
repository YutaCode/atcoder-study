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
	string s;
	cin >> s;

	string p = "ooooooo"; //レーン内のすべてのピンが倒れていたらx

	if (s[0] == '1') {
		cout << "No" << endl;
		return 0;
	}

	if (s[6] == '0') p[0] = 'x';
	if (s[3] == '0') p[1] = 'x';
	if (s[1] == '0' && s[7] == '0') p[2] = 'x';
	if (s[4] == '0') p[3] = 'x';
	if (s[2] == '0' && s[8] == '0') p[4] = 'x';
	if (s[5] == '0') p[5] = 'x';
	if (s[9] == '0') p[6] = 'x';

	if (p.find("ox") != string::npos && p.rfind("xo") != string::npos) {
		if (p.find("ox") < p.rfind("xo")) {
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
    return 0;
}