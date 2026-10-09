#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<string> s(n);
	rep(i, n) cin >> s[i];

	rep(i, n - 8)rep(j, m - 8) {
		if (s[i].substr(j, 4) == "###." && s[i + 1].substr(j, 4) == "###." && s[i + 2].substr(j, 4) == "###." && s[i + 3].substr(j, 4) == "....") {
			if (s[i + 5].substr(j + 5, 4) == "...." && s[i + 6].substr(j + 5, 4) == ".###" && s[i + 7].substr(j + 5, 4) == ".###" && s[i + 8].substr(j + 5, 4) == ".###") {
				cout << i + 1 << " " << j + 1 << endl;
			}
		}
	}
	return 0;
}