#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int A, B;
	cin >> A >> B;
	if (A == 1) A = 14;
	if (B == 1) B = 14;

	if (A > B) cout << "Alice" << endl;
	else if (A < B) cout << "Bob" << endl;
	else cout << "Draw" << endl;

	return 0;
}
