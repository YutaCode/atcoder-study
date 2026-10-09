#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	char b;
	cin >> b;

	if (b == 'A') cout << 'T' << endl;
	else if (b == 'T') cout << 'A' << endl;
	else if (b == 'C') cout << 'G' << endl;
	else cout << 'C' << endl;

	return 0;
}