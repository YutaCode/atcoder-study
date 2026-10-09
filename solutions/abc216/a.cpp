#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	string x;
	cin >> x;
	int y = x.at(x.size() - 1) - '0';
	x.erase(x.size() - 2);

	if (0 <= y && y <= 2) cout << x << "-" << endl;
	else if (7 <= y && y <= 9) cout << x << "+" << endl;
	else if (3 <= y && y <= 6) cout << x << endl;

	return 0;
}