#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	
	string t;
	rep(i, n) {
		if (s.substr(i, 2) == "na") {
			t += "nya";
			i++;
		}
		else t += s[i];
	}

	cout << t << endl;

	return 0;
}