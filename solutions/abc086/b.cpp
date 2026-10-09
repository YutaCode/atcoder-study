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
	string a, b;
	cin >> a >> b;
	string x = a + b;

	int n = stoi(x);

	int i = 1;
	while (i * i <= 100100) {
		if (i * i == n) {
			cout << "Yes" << endl;
			return 0;
		}
		i++;
	}

	cout << "No" << endl;
	return 0;
}