#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int a, b;
	cin >> a >> b;

	if (0 < a && b == 0) cout << "Gold" << endl;
	else if (a == 0 && 0 < b) cout << "Silver" << endl;
	else cout << "Alloy" << endl;

	return 0;
}