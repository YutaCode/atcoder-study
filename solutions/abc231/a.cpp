#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	double d;
	cin >> d;

	cout << fixed << setprecision(3) << d / 100 << endl;

	return 0;
}
