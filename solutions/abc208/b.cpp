#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int p;
	cin >> p;
	vector<int> value = { 3628800,362880,40320,5040,720,120,24,6,2,1 };

	int ans = 0;
	rep(i, 10) {
		int tmp = p / value[i];
		if (tmp > 100) tmp = 100;
		ans += tmp;
		p -= tmp * value[i];
	}

	cout << ans << endl;
	return 0;
}