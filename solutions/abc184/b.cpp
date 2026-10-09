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
	int n, x;
	cin >> n >> x;
	string s;
	cin >> s;

	rep(i, n) {
		if (s[i] == 'o') x++;
		else if (x != 0) x--;
	}

	cout << x << endl;
	return 0;
}