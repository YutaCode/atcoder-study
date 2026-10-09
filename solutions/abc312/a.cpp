#include<iostream>
#include<vector>
using namespace std;

int main() {
	string list[7] = { "ACE","BDF","CEG","DFA","EGB","FAC","GBD" };
	string S;
	cin >> S;
	bool in_list = false;

	for (int i = 0; i < 7; i++) {
		if (S == list[i]) {
			in_list = true;
			break;
		}
	}

	if (in_list) cout << "Yes" << endl;
	else cout << "No" << endl;
}