#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int i;
	string s;
	cin >> s >> i;

	cout << s.at(i - 1) << endl;

	return 0;
}
