#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	cout << min(a, b) + min(c, d) << endl;

	return 0;
}
