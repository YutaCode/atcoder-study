#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <map>
#include <unordered_map>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	string sa, sb, sc;
	cin >> sa >> sb >> sc;

	char next = sa[0];

	while (true) {
		if (next == 'a') {
			if (sa == "") {
				cout << 'A' << endl;
				return 0;
			}
			next = sa[0];
			sa.erase(0, 1);
		}
		if (next == 'b') {
			if (sb == "") {
				cout << 'B' << endl;
				return 0;
			}
			next = sb[0];
			sb.erase(0, 1);
		}
		if (next == 'c') {
			if (sc == "") {
				cout << 'C' << endl;
				return 0;
			}
			next = sc[0];
			sc.erase(0, 1);
		}
	}
}