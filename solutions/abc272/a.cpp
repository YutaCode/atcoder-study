#include<iostream>
#include<iomanip>
#include<vector>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int N;
	cin >> N;
	vector<int> A(N);
	rep(i, N) cin >> A.at(i);

	int sum = 0;

	rep(i, N) sum += A.at(i);

	cout << sum << endl;

	return 0;
}