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
	string o, e;
	cin >> o >> e;

	int size1 = (int)o.size();
	int size2 = (int)e.size();

	rep(i, size1 - 1) {
		cout << o[i] << e[i];
	}

	if (size1 == size2) cout << o[size1 - 1] << e[size2 - 1];
	else cout << o[size1 - 1];

	cout << endl;
	return 0;
}