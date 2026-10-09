#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	string s;
	cin >> s;

	sort(s.begin(), s.end());

	if (s.at(0) == 'a' && s.at(1) == 'b' && s.at(2) == 'c') cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
