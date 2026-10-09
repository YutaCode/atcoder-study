#include <iostream>
#include<vector>
#include<string>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int a, b, n;
	cin >> a >> b >> n;

	while (true) {
		if (n % a == 0 && n % b == 0) break;
		n++;
	}

	cout << n << endl;

	return 0;
}
