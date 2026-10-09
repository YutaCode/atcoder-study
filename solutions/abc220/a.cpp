#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	int ans = -1;

	while (c <= b) {
		if (a <= c) {
			ans = c;
			break;
		}
		c += c;
	}
	
	cout << ans << endl;

	return 0;
}