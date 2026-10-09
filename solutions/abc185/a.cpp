#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	vector<int> a(4);
	rep(i, 4) cin >> a.at(i);

	sort(a.begin(), a.end());

	cout << a.at(0) << endl;

	return 0;
}