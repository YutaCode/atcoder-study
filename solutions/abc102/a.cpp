#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int n;
	cin >> n;
	int ans = 1;

	while (true) {
		if (ans % 2 == 0 && ans % n == 0) {
			cout << ans << endl;
			return 0;
		}
		ans++;
	}

	return 0;
}
