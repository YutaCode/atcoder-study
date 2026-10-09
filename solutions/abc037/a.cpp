#include <iostream>
#include<vector>
#include<string>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int A, B, C;
	cin >> A >> B >> C;

	if (A > B) cout << C / B << endl;
	else cout << C / A << endl;

	return 0;
}
