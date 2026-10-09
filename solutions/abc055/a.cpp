#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int N;
	cin >> N;
	int x = 800 * N;
	int y = (N / 15) * 200;

	cout << x - y << endl;

	return 0;
}
