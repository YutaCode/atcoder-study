#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int h, a;
	cin >> h >> a;

	int counter = 0;

	while (h > 0) {
		h -= a;
		counter++;
	}

	cout << counter << endl;

	return 0;
}