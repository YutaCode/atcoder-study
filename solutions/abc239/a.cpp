#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int h;
	cin >> h;

	double ans = sqrt((double)h * (double)(12800000 + h));

	cout << fixed << setprecision(9) << ans << endl;

	return 0;
}
