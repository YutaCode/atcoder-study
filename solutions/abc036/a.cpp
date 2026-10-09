#include <iostream>
#include<vector>
#include<string>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int A, B;
	cin >> A >> B;

	int counter = 0;
	int pet = 0;

	while (pet < B) {
		pet += A;
		counter++;
	}

	cout << counter << endl;

	return 0;
}
