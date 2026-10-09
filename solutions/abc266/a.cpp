#include<iostream>
#include<algorithm>
#include<vector>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {

	string S;
	cin >> S;
	int N = S.size();

	cout << S.at(N / 2) << endl;
}