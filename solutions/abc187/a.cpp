#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	string a, b;
	cin >> a >> b;

	int ans1 = (a.at(0) - '0') + (a.at(1) - '0') + (a.at(2) - '0');
	int ans2 = (b.at(0) - '0') + (b.at(1) - '0') + (b.at(2) - '0');

	cout << max(ans1, ans2) << endl;

	return 0;
}