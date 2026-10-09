#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int s, w;
	cin >> s >> w;

	cout << (w >= s ? "unsafe" : "safe") << endl;

	return 0;
}