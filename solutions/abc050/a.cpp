#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int A, B;
	char op;
	cin >> A >> op >> B;

	if (op == '+') cout << A + B << endl;
	else cout << A - B << endl;

	return 0;
}
