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
	int k;
	string s;
	cin >> k >> s;

	int n = (int)s.size();
	if (n <= k) {
		cout << s << endl;
		return 0;
	}
	else {
		cout << s.substr(0, k) << "..." << endl;
	}
	return 0;
}