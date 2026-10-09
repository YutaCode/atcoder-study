#include<iostream>
#include<algorithm>
#include<vector>
#include<stdio.h>
#define rep(i, N) for (int i = 0; i < N; i++)
using namespace std;


int main() {
	int K;
	cin >> K;
	int time = 21 * 60;
	time += K;
	int hour = time / 60;
	int minute = time % 60;

	printf("%02d:%02d", hour, minute);

	return 0;
}