#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main() {

	string s[10][2] = { {"tourist","3858"},{"ksun48","3679"},{"Benq","3658"},{"Um_nik","3648"},{"apiad","3638"},{"Stonefeang","3630"},{"ecnerwala","3613"},{"mnbvmar","3555"},{"newbiedmy","3516"},{"semiexp","3481"} };

	string S;
	cin >> S;

	
	for (int i = 0; i < 10; i++) {
		if (S == s[i][0]) {
			cout << s[i][1] << endl;
			break;
		}
	}

	return 0;
}