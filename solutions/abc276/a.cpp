#include <iostream>
#include<vector>
#include<string>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	string S;
	cin >> S;
	int N = S.size();
	int counter = -1;

	rep(i, N) {
		if (S.at(i) == 'a') counter = i + 1;
	}

	cout << counter << endl;

	return 0;
}
