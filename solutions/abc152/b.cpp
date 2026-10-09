#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;

	if (a > b) swap(a, b);
	string t;

	rep(i, b) t += (a + '0');

	cout << t << endl;
	return 0;
}