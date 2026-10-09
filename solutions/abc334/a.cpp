#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <math.h>
#include <stdio.h>
#include <cmath>
#include <map>
#include <unordered_map>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;
using ll = long long;

int main() {
	int b, g;
	cin >> b >> g;

	if (b > g) cout << "Bat" << endl;
	else cout << "Glove" << endl;
	return 0;
}