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
	vector<ll> r;

	for (int i = 0; i <= 12; i++) {
		for (int j = 0; j + i <= 12; j++) {
			for (int k = 1; i + j + k <= 12; k++) {
				string s = string(i, '1') + string(j, '2') + string(k, '3');
				r.push_back(stoll(s));
			}
		}
	}

	sort(r.begin(), r.end());

	cout << r[n - 1] << endl;
	return 0;
}