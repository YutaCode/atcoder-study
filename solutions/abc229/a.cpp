#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<stdio.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	string s1, s2;
	cin >> s1 >> s2;

	if (s1.at(0) == s1.at(1)) cout << "Yes" << endl;
	else if (s2.at(0) == s2.at(1)) cout << "Yes" << endl;
	else if (s1.at(0) == s2.at(0)) cout << "Yes" << endl;
	else if (s1.at(1) == s2.at(1)) cout << "Yes" << endl;
	else cout << "No" << endl;
 
	return 0;
}
