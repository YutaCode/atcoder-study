#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define rep(i, N) for(int i = 0; i < N; i++)
using namespace std;

int main() {
    string x;
    cin >> x;
    int p = stoi(x);
    bool is_Weak = true;

    if (p % 1111 == 0) {
        cout << "Weak" << endl;
        return 0;
    }

    if (p < 1000) {
        if (p == 123) {
            cout << "Weak" << endl;
            return 0;
        }
        else {
            cout << "Strong" << endl;
            return 0;
        }
    }
    else {
        rep(i, 3) if ((x[i + 1] - '0') - (x[i] - '0') != 1 && (x[i + 1] - '0') - (x[i] - '0') != -9) {
            is_Weak = false;
            break;
        }
    }
    
    cout << (is_Weak ? "Weak" : "Strong") << endl;

    return 0;
}