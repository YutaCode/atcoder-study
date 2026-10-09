#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int x, a, b;
	cin >> x >> a >> b;

	if (a >= b) cout << "delicious" << endl;
	else if (a + x >= b) cout << "safe" << endl;
	else cout << "dangerous" << endl;

	return 0;
}
