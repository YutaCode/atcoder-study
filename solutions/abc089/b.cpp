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
	rep(i, n) {
		char s;
		cin >> s;
		if (s == 'Y') {
			cout << "Four" << endl;
			return 0;
		}
	}
	cout << "Three" << endl;
	return 0;
}