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
	vector<int> a(n);
	vector<int> b(n);
	rep(i, n) cin >> a[i];
	rep(i, n) cin >> b[i];

	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	cout << max(b[0] - a[n - 1] + 1, 0) << endl;

}