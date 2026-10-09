#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <map>
#include <unordered_map>
#include <queue>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	
	bool cnt = true;
	int ctz = 0;
	while (cnt) {
		if (n % 2 == 0) {
			ctz++;
			n = n >> 1;
		}
		else cnt = false;
	}

	cout << ctz << endl;
	return 0;
}