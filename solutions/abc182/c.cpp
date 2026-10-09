#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <map> 
#include <unordered_map>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	string n; 
	cin >> n;

	vector<int> count(3, 0);
	rep(i, (int)n.size()) count[(n[i] - '0') % 3]++;

	if (stoll(n) % 3 == 0) cout << 0 << endl;
	else if (stoll(n) % 3 == 1) {
		if (count[1] > 0 && n.size() != 1) cout << 1 << endl;
		else if (count[2] > 1 && n.size() != 2) cout << 2 << endl;
		else cout << -1 << endl;
	}
	else if (stoll(n) % 3 == 2) {
		if (count[2] > 0 && n.size() != 1) cout << 1 << endl;
		else if (count[1] > 1 && n.size() != 2) cout << 2 << endl;
		else cout << -1 << endl;
	}

	return 0;
}