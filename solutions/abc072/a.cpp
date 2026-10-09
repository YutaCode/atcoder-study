#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int64_t X, t;
	cin >> X >> t;

	if (X - t >= 0) cout << X - t << endl;
	else cout << 0 << endl;
 
	return 0;
}
