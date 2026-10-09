#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;
    int ans = max(abs(8 - r), abs(8 - c));

    if (ans % 2 == 1) cout << "black" << endl;
    else cout << "white" << endl;

    return 0;
}