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
#include <queue>
#include <climits>
#include <bitset>
#include <set>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int count(int n) {
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) ans++;
	}

	return ans;
}

int main() {
	int n;
	cin >> n;
	int ans = 0;
	
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 1 && count(i) == 8) ans++;
	}

	cout << ans << endl;
	return 0;
}