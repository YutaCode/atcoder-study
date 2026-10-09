#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	vector<int> x(3);
	rep(i, 3) cin >> x.at(i);

	sort(x.begin(), x.end());

	cout << x.at(0) + x.at(1) << endl;

	return 0;
}