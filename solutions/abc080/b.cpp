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

	int n = stoi(s);

	int f = 0;
	for (char x : s) f += (x - '0');

	if (n % f == 0) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}