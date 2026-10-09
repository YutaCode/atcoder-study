#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	string s;
	cin >> s;

	cout << (s.at(0) - '0') * (s.at(2) - '0') << endl;

	return 0;
}
