#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <map> 
#include <unordered_map>
#include <queue>
#define rep(i, N) for (int i = 0; i < N; i++)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using p = pair<int, int>;

int main() {
	int a, b, w;
	cin >> a >> b >> w;
	w *= 1000;

	int M = -1, m = 1000000;

	M = (w / a);
	m = ((w + b - 1) / b);

	if (M < m) {
		cout << "UNSATISFIABLE" << endl;
		return 0;
	}

	cout << m << " " << M << endl;
	return 0;
}