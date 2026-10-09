#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int x, y, z;
	cin >> x >> y >> z;

	swap(x, y);
	swap(x, z);

	cout << x << " " << y << " " << z << endl;

	return 0;
}