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
	map<string, int> r;

	rep(i, n) {
		string s;
		cin >> s;
		r[s]++;
	}
	
	int v = -1;
	for (auto it = r.begin(); it != r.end(); it++) {
		v = max(v, it->second);
	}

	for (auto it = r.begin(); it != r.end(); it++) {
		if (it->second == v) {
			cout << it->first << endl;
			return 0;
		}
	}
}