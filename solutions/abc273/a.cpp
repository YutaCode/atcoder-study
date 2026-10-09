#include<iostream>
#include<iomanip>
#include<vector>
using namespace std;


int calc(int N) {
	if (N == 0) return 1;
	return N * calc(N - 1);
}

int main() {
	int N;
	cin >> N;

	int ans = calc(N);

	cout << ans << endl;

	return 0;
}