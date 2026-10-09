#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int a, b, c, x;
	cin >> a >> b >> c >> x;

	if (x <= a) cout << 1 << endl;
	else if (x <= b) {
		cout << fixed << setprecision(10);
		cout << (double)c / (double)(b - a) << endl;
	}
	else cout << 0 << endl;

	return 0;
}
