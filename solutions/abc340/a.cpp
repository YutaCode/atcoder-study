#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <map> 
#include <unordered_map>
#define rep(i, N) for (int i = 0; i < N; i++)
#define all(v) v.begin(), v.end()
using namespace std;
using ll = long long;
using p = pair<int, int>;

int main() {
	int a, b, d;
	cin >> a >> b >> d;

	int tmp = a;

	while (tmp <= b) {
		cout << tmp << " ";
		tmp += d;
	}

	cout << endl;
	return 0;
}