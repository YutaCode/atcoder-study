#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int a, b;
	cin >> a >> b;

	if (a * b % 2 != 0) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
