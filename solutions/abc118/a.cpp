#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int a, b;
	cin >> a >> b;

	if (b % a == 0) cout << a + b << endl;
	else cout << b - a << endl;
 
	return 0;
}