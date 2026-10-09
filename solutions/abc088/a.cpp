#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int n, a;
	cin >> n >> a;

	if (n % 500 <= a) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
