#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;

int main() {
	double A, B;
	cin >> A >> B;

	cout << fixed << setprecision(3);
	cout << B / A << endl;

	return 0;
}