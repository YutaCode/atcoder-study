#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int A, B, C;
	cin >> A >> B >> C;

	if (A <= C && C <= B) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
