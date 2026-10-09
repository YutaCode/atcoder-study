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
	
	int ans = 0;
	for (int a = 1; a <= 1000000; a++) {
		ans += (n - 1) / a;
	}

	cout << ans << endl;
	return 0;
}