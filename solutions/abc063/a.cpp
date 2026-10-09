#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int x, y;
	cin >> x >> y;

	if (x + y >= 10) cout << "error" << endl;
	else cout << x + y << endl;

	return 0;
}
