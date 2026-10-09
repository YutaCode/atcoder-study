#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int a, b, x;
	cin >> a >> b >> x;

	if (a <= x && x <= a + b) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}
