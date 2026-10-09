#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cctype>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	string s;
	cin >> s;
	string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	if (s.size() != 8) {
		cout << "No" << endl;
		return 0;
	}

	char s1 = s[0]; char s3 = s[7];

	bool p1 = false;
	bool p3 = false;

	rep(i, alpha.size()) if (s1 == alpha[i]) {
		p1 = true;
		break;
	}

	rep(i, alpha.size()) if (s3 == alpha[i]) {
		p3 = true;
		break;
	}

	if (!p1 || !p3) {
		cout << "No" << endl;
		return 0;
	}
	
	string s2 = s.substr(1, 6);
	int x = stoi(s2);
	if (!(100000 <= x && x <= 999999)) {
		cout << "No" << endl;
		return 0;
	}


	cout << "Yes" << endl;
	return 0;
}