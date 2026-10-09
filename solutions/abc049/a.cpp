#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	char c;
	cin >> c;
	vector<char> vowel = { 'a','i','u','e','o' };

	rep(i, vowel.size()) {
		if (c == vowel.at(i)) {
			cout << "vowel" << endl;
			return 0;
		}
	}

	cout << "consonant" << endl;

	return 0;
}
