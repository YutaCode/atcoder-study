#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	char a, b;
	cin >> a >> b;

	if (a == b) cout << 'H' << endl;
	else cout << 'D' << endl;

	return 0;
}
