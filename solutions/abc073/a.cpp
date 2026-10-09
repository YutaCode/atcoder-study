#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int X;
	cin >> X;

	if (X / 10 == 9 || X % 10 == 9) cout << "Yes" << endl;
	else cout << "No" << endl;
 
	return 0;
}
