#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    char p, q;
    cin >> p >> q;
    vector<int> x = { 0,3,4,8,9,14,23 };
    string s = "ABCDEFG";
    
    int p_index = 0;
    int q_index = 0;

    rep(i, s.size()) {
        if (p == s[i]) p_index = i;
        if (q == s[i]) q_index = i;
    }

    cout << abs(x[p_index] - x[q_index]) << endl;

    return 0;
}