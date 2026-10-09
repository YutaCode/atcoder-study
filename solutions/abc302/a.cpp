#include<iostream>
#include<vector>
using namespace std;

int main() {
	long long A, B;
	cin >> A >> B;

	if (A % B != 0) cout << A / B + 1 << endl;
	else if (A % B == 0) cout << A / B << endl;
}