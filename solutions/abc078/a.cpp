#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	string X, Y;
	cin >> X >> Y;

	if (X < Y) cout << "<" << endl;
	else if (X > Y) cout << ">" << endl;
	else cout << "=" << endl;

	return 0;
}
