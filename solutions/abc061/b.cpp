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
	int n, m;
	cin >> n >> m;

	vector<int> w(n, 0); //各都市の道(way)の本数を格納する
	rep(i, m) {
		int a, b;
		cin >> a >> b;
		a--; b--;

		w[a]++;
		w[b]++;
	}

	rep(i, n) cout << w[i] << endl;
	return 0;
}