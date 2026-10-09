#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
	string s;
	cin >> s;
	int first = s.find('|');
	int last = s.rfind('|');

	cout << s.substr(0, first) << s.substr(last + 1) << endl;
	return 0;
}