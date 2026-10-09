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

	map<int, int> p;

	rep(i, n) {
		int a;
		cin >> a;
		p[a]++;
	}

	int ans = 0;
	
	for (auto& element : p) {
		ans += element.second / 2;
	}

	cout << ans << endl;
	return 0;
}