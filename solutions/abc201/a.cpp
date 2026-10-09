#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	vector<int> a(3);
	rep(i, 3) cin >> a.at(i);

	sort(a.begin(), a.end());

	cout << (a.at(1) - a.at(0) == a.at(2) - a.at(1) ? "Yes" : "No") << endl;

	return 0;
}