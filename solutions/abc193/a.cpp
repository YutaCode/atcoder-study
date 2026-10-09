#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int a,b;
	cin >> a >> b;

	cout << (double)(a - b) / (double)a * 100 << endl;

	return 0;
}