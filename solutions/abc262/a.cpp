#include <iostream>
#include<vector>
#include<string>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int Y;
	cin >> Y;
	int counter = 1998;

	while (counter < Y) {
		counter += 4;
	}

	cout << counter << endl;

	return 0;
}
