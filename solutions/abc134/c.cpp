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
	vector<int> a(n);
	rep(i, n) cin >> a[i];

	int first = -1, second = -1;
	rep(i, n) {
		if (a[i] > first) {
			second = first;
			first = a[i];
		}
		else if (a[i] > second) {
			second = a[i];
		}
	}

	rep(i, n) {
		if (a[i] == first) cout << second << endl;
		else cout << first << endl;
	}

	return 0;
}