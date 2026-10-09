#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (a == b && a != c) cout << "Yes" << endl;
	else if (b == c && b != a) cout << "Yes" << endl;
	else if (c == a && c != b) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}