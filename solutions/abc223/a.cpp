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

	if (x > 0 && x % 100 == 0) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}