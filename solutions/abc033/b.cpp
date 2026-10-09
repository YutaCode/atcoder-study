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

	int sum = 0; //N個の町の総人口を格納する
	vector<string> s(n);
	vector<int> p(n);
	rep(i, n) {
		cin >> s[i] >> p[i];
		sum += p[i];
	}

	string name = "atcoder";
	rep(i, n) {
		if (p[i] > sum / 2) name = s[i];
	}

	cout << name << endl;
	return 0;
}