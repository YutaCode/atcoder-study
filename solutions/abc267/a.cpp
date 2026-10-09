#include<iostream>
#include<algorithm>
#include<vector>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	vector<string> week = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
	string S;
	cin >> S;
	int counter = 0;

	rep(i, 5) {
		if (S == week.at(i)) {
			counter = i;
			break;
		}
	}

	cout << 5 - counter << endl;
}