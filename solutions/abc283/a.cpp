#include <iostream>
#include<vector>
using namespace std;
#define rep(i, N) for (int i = 1; i < N; i++)

int main() {
	int64_t A, B;
	cin >> A >> B;
	int tmp = A;

	rep(i, B) A *= tmp;

	cout << A << endl;

	return 0;
}
