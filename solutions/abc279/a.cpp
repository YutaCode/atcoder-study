#include <iostream>
#include<vector>
#include<string>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	string S;
	cin >> S;
	int N = S.size();
	int counter = 0;

	rep(i, N) {
		if (S.at(i) == 'v') counter++;
		else if (S.at(i) == 'w') counter += 2;
	}

	cout << counter << endl;

	return 0;
}
