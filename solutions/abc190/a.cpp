#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (c == 0) {
		if (a > b) cout << "Takahashi" << endl;
		else cout << "Aoki" << endl;
	}
	else {
		if (b > a) cout << "Aoki" << endl;
		else cout << "Takahashi" << endl;
	}

	return 0;
}