#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int x, y;
	cin >> x >> y;

	if (-3 <= y - x && y - x <= 2) cout << "Yes";
	else cout << "No" << endl;

	return 0;
}