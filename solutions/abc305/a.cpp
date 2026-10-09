#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int N; cin >> N;

	if (N < 3) cout << 0 << endl;

	for (int i = 0; i <= 18; i++) {
		if (3 + 5 * i <= N && N < 3 + 5 * (i + 1)) cout << 5 * (i + 1) << endl;
	}

	if (N >= 98) cout << 100 << endl;
}