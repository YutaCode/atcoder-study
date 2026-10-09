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
	rep(i, n) cin >> a[i];
	vector<int> b(n);
	rep(i, n) cin >> b[i];

	int just = 0, exist = 0;

	rep(i, n) {
		rep(j, n) {
			if (a[i] == b[j]) {
				if (i == j) just++;
				else exist++;
			}
		}
	}

	printf("%d\n%d\n", just, exist);

	return 0;
}