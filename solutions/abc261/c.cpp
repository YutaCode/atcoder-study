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

	map<string, int> a;
	rep(i, n) {
		string s;
		cin >> s;
		a[s]++;

		if (a[s] == 1) cout << s << endl;
		else cout << s << "(" << a[s] - 1 << ")" << endl;
	}
	return 0;
}