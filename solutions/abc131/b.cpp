#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	int n, l;
	cin >> n >> l;
	vector<int> t(n);
	rep(i, n) t[i] = l + i;

	int goukei = 0;
	rep(i, n) goukei += t[i];

	if (t[0] > 0) cout << goukei - t[0] << endl;
	else if (t[n - 1] < 0) cout << goukei - t[n - 1] << endl;
	else cout << goukei << endl;
	return 0;
}