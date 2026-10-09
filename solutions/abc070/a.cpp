#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int N;
	cin >> N;

	if ((N / 100) == (N % 10)) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}
