#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int64_t n;
    cin >> n;
    int64_t p = 998244353;

    while (n >= p) n -= p;

    while (n < 0) n += p;

    cout << n << endl;
    
}