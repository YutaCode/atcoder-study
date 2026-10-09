#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int a;
	string s;
	cin >> a >> s;

	cout << (a < 3200 ? "red" : s) << endl;

	return 0;
}