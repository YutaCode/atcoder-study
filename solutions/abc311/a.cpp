#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	string S;
	cin >> S;

	int a, b, c;

	a = S.find('A');
	b = S.find('B');
	c = S.find('C');

	cout << max({a, b, c}) + 1 << endl;

	return 0;
}