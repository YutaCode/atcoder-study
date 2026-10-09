#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

int main() {
	int n;
	string s;
	cin >> n >> s;

	int count = 0;
	rep(i, n - 2) {
		if (s[i] == 'A' && s[i + 1] == 'B' && s[i + 2] == 'C') count++;
	}

	cout << count << endl;
	return 0;
}