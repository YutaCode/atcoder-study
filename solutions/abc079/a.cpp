#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int N;
	cin >> N;

	int thousand = N / 1000;
	int hundred = (N % 1000) / 100;
	int ten = (N % 100) / 10;
	int one = N % 10;

	if (thousand == hundred && thousand == ten) cout << "Yes" << endl;
	else if (hundred == ten && hundred == one) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
