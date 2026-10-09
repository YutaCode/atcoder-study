#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if (abs(a - c) <= d) cout << "Yes" << endl;
	else if (abs(a - b) <= d && abs(b - c) <= d) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
