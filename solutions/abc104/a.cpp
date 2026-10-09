#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int r;
	cin >> r;

	if (r < 1200) cout << "ABC" << endl;
	else if (r < 2800) cout << "ARC" << endl;
	else cout << "AGC" << endl;

	return 0;
}
