#include<iostream>
using namespace std;


int main() {
	int A, D;
	cin >> A >> D;

	int max = (A + 1) * D;
	if ((A * (D + 1)) > max) max = A * (D + 1);

	cout << max << endl;

	return 0;
}