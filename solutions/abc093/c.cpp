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
	int a, b, c;
	cin >> a >> b >> c;

	int sum = a + b + c;
	int mx = max(max(a, b), c);
	mx *= 3;

	if ((mx - sum) % 2 == 0) cout << (mx - sum) / 2 << endl;
	else cout << (mx - sum) / 2 + 2 << endl;

	return 0;
}