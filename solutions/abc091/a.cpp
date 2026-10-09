#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (a + b >= c) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
