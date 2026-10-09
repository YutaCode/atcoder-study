#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	string s;
	cin >> s;

	cout << "0" + s.substr(0,3) << endl;

	return 0;
}
