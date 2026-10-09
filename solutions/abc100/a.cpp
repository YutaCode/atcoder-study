#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int a, b;
	cin >> a >> b;

	if (max(a, b) <= 8) cout << "Yay!" << endl;
	else cout << ":(" << endl;

	return 0;
}
