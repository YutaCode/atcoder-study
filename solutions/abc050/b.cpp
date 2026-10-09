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

	int time = 0; //ドリンクなしでかかる時間を格納する
	vector<int> t(n);
	rep(i, n) {
		cin >> t[i];
		time += t[i];
	}

	int m;
	cin >> m;

	rep(i, m) {
		int p, x;
		cin >> p >> x;
		p--;

		cout << time - t[p] + x << endl;
	}
	return 0;
}