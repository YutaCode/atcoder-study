#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    int64_t a, b, k;
    cin >> a >> b >> k;

    int ans = 0;

    while (a < b) {
        a *= k;
        ans++;
    }
    
    cout << ans << endl;

    return 0;
}