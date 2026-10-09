#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	vector<int> s1(3);
	rep(i, 3) cin >> s1.at(i);
	vector<int> s2 = s1;
	sort(s2.begin(), s2.end());

	if (s1.at(1) == s2.at(1)) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}