#include <iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<iomanip>
#include<stdio.h>
using namespace std;
#define rep(i, N) for (int i = 0; i < N; i++)

int main() {
	int n;
	cin >> n;

	if (n <= 41) printf("AGC%03d", n);
	else printf("AGC%03d", n + 1);
 
	return 0;
}