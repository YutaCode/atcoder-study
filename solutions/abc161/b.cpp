#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;

	vector<int> v(n);
	rep(i, n) cin >> v[i];

	//総得票数を求める
	int sum = 0;
	rep(i, n) sum += v[i];

	int p = 0; //人気商品として選べる商品の数を格納
	rep(i, n) {
		if (v[i] >= (double)sum / (4 * m)) p++;
	}

	cout << (p >= m ? "Yes" : "No") << endl;
	return 0;
}