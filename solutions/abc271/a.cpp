#include<iostream>
#include<iomanip>
#include<vector>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int N;
	cin >> N;
	string S = "0123456789ABCDEF";

	int first = N / 16;
	int second = N % 16;

	cout << S.at(first) << S.at(second) << endl;

	return 0;
}