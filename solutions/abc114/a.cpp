#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int x;
	cin >> x;

	if(x == 3 || x == 5 || x == 7) cout << "YES" << endl;
	else cout << "NO" << endl;

	return 0;
}
