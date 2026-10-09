#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>
#include <math.h>
#include <iomanip>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int a, b;
	cin >> a >> b;

	cout << fixed << setprecision(10) << (double)a / sqrt(a * a + b * b) << endl;
	cout << fixed << setprecision(10) << (double)b / sqrt(a * a + b * b) << endl;

	return 0;
}