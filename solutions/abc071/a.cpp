#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int x, a, b;
	cin >> x >> a >> b;

	int l1 = abs(x - a);
	int l2 = abs(x - b);

	if (l1 < l2) cout << "A" << endl;
	else cout << "B" << endl;

	return 0;
}
