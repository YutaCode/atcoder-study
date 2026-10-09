#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	long long n;
	cin >> n;

	if (n !=2 && n != 3 && n != 4) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
