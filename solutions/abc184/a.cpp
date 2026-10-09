#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	cout << a * d - b * c << endl;

	return 0;
}