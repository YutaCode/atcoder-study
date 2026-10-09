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
#include <queue>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int n, q;
	cin >> n >> q;

	vector<pair<int, int>> vec;
	rep(i, n) {
		vec.push_back(make_pair(n - i, 0));
	}

	rep(i, q) {
		string a, b;
		cin >> a >> b;

		if (a == "2") cout << vec[vec.size() - stoi(b)].first << " " << vec[vec.size() - stoi(b)].second << endl;
		else {
			if (b == "U") vec.push_back(make_pair(vec[vec.size() - 1].first, vec[vec.size() - 1].second + 1));
			else if (b == "D") vec.push_back(make_pair(vec[vec.size() - 1].first, vec[vec.size() - 1].second - 1));
			else if (b == "L") vec.push_back(make_pair(vec[vec.size() - 1].first - 1, vec[vec.size() - 1].second));
			else if (b == "R") vec.push_back(make_pair(vec[vec.size() - 1].first + 1, vec[vec.size() - 1].second));
		}
	}

	return 0;
}