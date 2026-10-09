#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	vector<int> x(5);
	int k;
	rep(i, 5) cin >> x.at(i);
	cin >> k;

	sort(x.begin(), x.end());

	if ((x.at(4) - x.at(0)) <= k) cout << "Yay!" << endl;
	else cout << ":(" << endl;

	return 0;
}