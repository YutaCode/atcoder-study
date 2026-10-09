#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	vector<string> s(8);
	rep(i, 8) cin >> s[i];

	string col = "abcdefgh";
	string row = "87654321";

	rep(i, 8)rep(j, 8) if (s[i][j] == '*') cout << col[j] << row[i] << endl;

	return 0;
}