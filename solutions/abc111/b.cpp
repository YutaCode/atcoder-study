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

	while (n <= 1000) {
		if (n % 111 == 0) {
			cout << n << endl;
			return 0;
		}
		n++;
	}
	cout << n << endl;
	return 0;
}