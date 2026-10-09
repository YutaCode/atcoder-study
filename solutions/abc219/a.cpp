#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int x;
	cin >> x;

	if (x < 40) cout << 40 - x << endl;
	else if (x < 70) cout << 70 - x << endl;
	else if (x < 90) cout << 90 - x << endl;
	else cout << "expert" << endl;

	return 0;
}