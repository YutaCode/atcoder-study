#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	int m;
	cin >> m;

	if (m < 100) cout << "00" << endl;
	else if (m <= 5000) {
		m /= 100;
		printf("%02d\n", m);
	}
	else if (m <= 30000) {
		cout << m / 1000 + 50 << endl;
	}
	else if (m <= 70000) {
		m /= 1000;
		m -= 30;
		m /= 5;
		m += 80;
		cout << m << endl;
	}
	else cout << 89 << endl;
	return 0;
}