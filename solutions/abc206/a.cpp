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

	int ans = n * 1.08;

	if (ans <= 205) cout << "Yay!" << endl;
	else if (ans < 207) cout << "so-so" << endl;
	else cout << ":(" << endl;

	return 0;
}