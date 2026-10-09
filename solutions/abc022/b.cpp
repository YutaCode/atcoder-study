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
	int n;
	cin >> n;
	
	vector<int> a;
	map<int, int> b;

	rep(i, n) {
		int x;
		cin >> x;

		a.push_back(x);
		b.insert(make_pair(x, 0));
	}

	cout << (int)a.size() - (int)b.size() << endl;
	return 0;
}