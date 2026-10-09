#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int n, a, b;
	cin >> n >> a >> b;

	cout << min(n * a, b) << endl;

	return 0;
}