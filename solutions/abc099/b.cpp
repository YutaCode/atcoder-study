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
using ll = long long;

int main() {
	int a, b;
	cin >> a >> b;

	int n = b - a;

	int h = n * (n - 1) / 2; //左の塔の高さ

	cout << h - a << endl;
	return 0;
}