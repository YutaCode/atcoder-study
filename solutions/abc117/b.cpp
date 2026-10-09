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
	vector<int> l(n);
	rep(i, n) cin >> l[i];

	sort(l.begin(), l.end());

	int sum = 0;
	rep(i, n - 1) {
		sum += l[i];
	}

	cout << (l[n - 1] < sum ? "Yes" : "No") << endl;
	return 0;
}