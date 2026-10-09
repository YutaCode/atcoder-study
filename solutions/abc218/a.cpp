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
	string s;
	cin >> n >> s;

	cout << (s.at(n - 1) == 'o' ? "Yes": "No") << endl;

	return 0;
}