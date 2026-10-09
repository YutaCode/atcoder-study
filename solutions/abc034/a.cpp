#include <iostream>
#include<vector>
#include<string>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int x, y;
	cin >> x >> y;

	if (x < y) cout << "Better" << endl;
	else cout << "Worse" << endl;

	return 0;
}
