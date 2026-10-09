#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	vector<int> a(3);
	rep(i, 3) cin >> a.at(i);

	int ans = 0;
	sort(a.begin(), a.end());
	rep(i, 2) ans += abs(a.at(i) - a.at(i + 1));

	cout << ans << endl;

	return 0;
}
