#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;
using ll = long long;

vector<ll> t;

ll tribo(int n) {
	int val = 10007;
	if (n == 1) return t[1] = 0;
	else if (n == 2) return t[2] = 0;
	else if (n == 3) return t[3] = 1;
	if (t[n] != -1) return t[n];
	else return t[n] = (tribo(n - 1) + tribo(n - 2) + tribo(n - 3)) % val;
}

int main() {
	int n;
	cin >> n;
	t.assign(n + 1, -1LL);
	tribo(n);

	cout << t[n] << endl;
	return 0;
}