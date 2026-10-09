#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	int h, n;
	cin >> h >> n;

	int dam = 0;
	rep(i, n) {
		int a;
		cin >> a;
		dam += a;
	}

	cout << (dam >= h ? "Yes" : "No") << endl;
	return 0;
}