#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int k, a, b;
	cin >> k >> a >> b;
	int ans = 0;

	while (ans <= b) {
		if (a <= ans) {
			cout << "OK" << endl;
			return 0;
		}
		ans += k;
	}

	cout << "NG" << endl;
	return 0;
}