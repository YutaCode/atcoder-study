#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int n;
	cin >> n;

	while (true) {
		int hundred = n / 100;
		int ten = n / 10 - hundred * 10;
		int one = n % 10;

		if (hundred * ten == one) {
			cout << n << endl;
			break;
		}

		n++;
	}

	return 0;
}