#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	if (a < c) cout << "Takahashi" << endl;
	else if (a == c && b <= d) cout << "Takahashi" << endl;
	else cout << "Aoki" << endl;

	return 0;
}
