#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int x, a, b;
	cin >> x >> a >> b;

	cout << (x - a) % b << endl;

	return 0;
}
