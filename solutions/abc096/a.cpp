#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int a, b;
	cin >> a >> b;
	int ans = a;

	if (b < a) ans--;

	cout << ans << endl;

	return 0;
}
