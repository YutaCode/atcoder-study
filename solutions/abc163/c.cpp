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
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	vector<int> b(n, 0);

	rep(i, n - 1) {
		int a;
		cin >> a;
		a--;

		b[a]++;
	}
	
	rep(i, n) cout << b[i] << endl;
	return 0;
}