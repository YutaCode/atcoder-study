#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int N, A, B;
	cin >> N >> A >> B;

	cout << min(N * A, B) << endl;

	return 0;
}
