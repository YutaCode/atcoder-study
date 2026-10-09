#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int m, h;
	cin >> m >> h;

	cout << (h % m == 0 ? "Yes" :"No") << endl;

	return 0;
}