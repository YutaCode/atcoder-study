#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;


int main() {
    int n;
    cin >> n;

    vector<int> x;
    vector<char> s;
    

    for (int i = 1; i < 10; i++) {
        if (n % i == 0) x.push_back(i);
    }


    rep(i, n + 1) {
        bool is_break = false;
        for (int j : x) {
            if (i % (n / j) == 0) {
                s.push_back(j + '0');
                is_break = true;
                break;
            }
        }
        if(!is_break) s.push_back('-');
    }

    rep(i, n + 1) cout << s.at(i);
    cout << endl;

    return 0;
}