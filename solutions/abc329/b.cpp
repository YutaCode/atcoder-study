#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <map>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;

	vector<int> a(n);
	rep(i, n) cin >> a[i];

	sort(a.begin(), a.end());
	reverse(a.begin(), a.end());

	rep(i, n) {
		if (a[i] != a[0]) {
			cout << a[i] << endl;
			return 0;
		}
	}
}