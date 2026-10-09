#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	string s, t;
	cin >> s >> t;

	if (s < t) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}