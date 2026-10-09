#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cctype>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int dir = 0;
	pair<int, int> r = make_pair(0, 0);

	rep(i, n) {
		if (s[i] == 'R') dir++;

		if (s[i] == 'S') {
			if (dir % 4 == 0) r.first++;
			else if (dir % 4 == 1) r.second--;
			else if (dir % 4 == 2) r.first--;
			else if (dir % 4 == 3) r.second++;
		}
	}

	cout << r.first << " " << r.second << endl;
	return 0;
}