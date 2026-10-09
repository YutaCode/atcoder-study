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

int main() {
	int a, b;
	cin >> a >> b;

	rep(i, 10) {
		if (i != a + b) {
			cout << i << endl;
			return 0;
		}
	}
}