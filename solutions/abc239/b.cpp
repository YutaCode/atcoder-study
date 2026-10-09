#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
	long long x;
	cin >> x;

	if (x >= 0 || x % 10 == 0) cout << x / 10 << endl;
	else cout << x / 10 - 1 << endl;
}