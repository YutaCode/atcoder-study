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
#include <climits>
#include <bitset>
#include <set>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int n, t;
	cin >> n >> t;

	vector<ll> v(n, 0);
	map<ll, ll> ps;
	ps[0LL] = n;
	set<ll> us;
	us.insert(0);
	rep(i, t) {
		int a, b;
		cin >> a >> b;
		a--;
		ps[v[a]]--;
		if (ps[v[a]] == 0) us.erase(v[a]);
		v[a] += b;
		ps[v[a]]++;
		if (ps[v[a]] == 1) us.insert(v[a]);

		cout << us.size() << endl;
	}
	return 0;
}