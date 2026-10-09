#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;

bool is_Palindrome(string s) {
	string t = s;
	reverse(t.begin(), t.end());
	return (s == t);
}

int main() {
	string s;
	cin >> s;
	int n = (int)s.size();

	string s2 = s.substr(0, (n - 1) / 2);
	string s3 = s.substr((n + 3) / 2 - 1, n - (n + 3) / 2 + 1);

	bool ans1 = is_Palindrome(s);
	bool ans2 = is_Palindrome(s2);
	bool ans3 = is_Palindrome(s3);

	if (ans1 && ans2 && ans3) cout << "Yes" << endl;
	else cout << "No" << endl;
	return 0;
}