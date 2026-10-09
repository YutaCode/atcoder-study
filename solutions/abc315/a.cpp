#include<iostream>
#include<string>
using namespace std;

int main() {
	string S;
	cin >> S;
	string s = "";
	int N = S.length();

	char aiueo[5] = { 'a','i','u','e','o'};



	for (int i = 0; i < N; i++) {
		bool in_list = false;
		for (int j = 0; j < 5; j++) {
			if (S[i] == aiueo[j]) {
				in_list = true;
				break;
			}
		}

		if(!in_list) s.push_back(S[i]);
	}
	cout << s << endl;
}