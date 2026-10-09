#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int v, a, b, c;
	cin >> v >> a >> b >> c;
	
	if (v % (a + b + c) < a) cout << "F" << endl;
	else if (v % (a + b + c) < (a + b)) cout << "M" << endl;
	else cout << "T" << endl;

	return 0;
}
