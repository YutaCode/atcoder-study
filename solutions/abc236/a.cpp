#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	string s;
	int a, b;
	cin >> s >> a >> b;

	swap(s.at(a - 1), s.at(b - 1));
	cout << s << endl;

	return 0;
}
