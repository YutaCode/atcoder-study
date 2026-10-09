#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int64_t n;
    cin >> n;
    int k = 0;
    int64_t x = 1;

    while (x <= n) {
        x *= 2;
        k++;
    }

    cout << k - 1 << endl;

    return 0;
}