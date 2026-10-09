#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int n;
	cin >> n;

	if (n == 1) cout << "Hello World" << endl;
	else {
		int a, b;
		cin >> a >> b;
		cout << a + b << endl;
	}

	return 0;
}
