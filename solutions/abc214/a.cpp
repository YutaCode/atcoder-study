#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int n;
	cin >> n;

	if (n <= 125) cout << 4 << endl;
	else if (n <= 211) cout << 6 << endl;
	else cout << 8 << endl;

	return 0;
}