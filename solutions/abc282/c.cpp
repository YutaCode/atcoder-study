#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <map> 
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;

	bool tiedUp = false;

	rep(i, n) {
		if (s[i] == '"') tiedUp = !tiedUp;

		if (!tiedUp && s[i] == ',') s[i] = '.';
	}

	cout << s << endl;
	return 0;
}