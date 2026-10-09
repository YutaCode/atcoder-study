#include <iostream>
#include<vector>
#include<string>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int W, H;
	cin >> W >> H;

	if (3 * W == 4 * H) cout << "4:3" << endl;
	else cout << "16:9" << endl;

	return 0;
}
