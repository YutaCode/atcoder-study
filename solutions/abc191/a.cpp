#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int v, t, s, d;
	cin >> v >> t >> s >> d;

	if (v * t <= d && d <= v * s) cout << "No" << endl;
	else cout << "Yes" << endl;

	return 0;
}