#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int a, b;
	string s, t, u;
	cin >> s >> t >> a >> b >> u;

	if (s == u) cout << a - 1 << " " << b << endl;
	else cout << a  << " " << b - 1 << endl;

	return 0;
}