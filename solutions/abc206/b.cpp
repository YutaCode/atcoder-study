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

	int i = 0, ans = 0;
	while (ans < n) {
		i++;
		ans += i;
	}

	cout << i << endl;
	return 0;
}