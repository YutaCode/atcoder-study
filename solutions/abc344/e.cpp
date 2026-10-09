#include <iostream>
#include <list>
#include <unordered_map>

using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)

int main() {
    int n;
    cin >> n;
    list<int> l;
    unordered_map<int, list<int>::iterator> pos_map;

    rep(i, n) {
        int x;
        cin >> x;
        l.push_back(x);
        auto it = l.end();
        --it;
        pos_map[x] = it;
    }

    int q;
    cin >> q;
    while (q--) {
        int type, x, y;
        cin >> type;
        if (type == 1) {
            cin >> x >> y;
            auto it = pos_map[x];
            l.insert(next(it), y);
            pos_map[y] = next(it);
        } else {
            cin >> x;
            auto it = pos_map[x];
            l.erase(it);
            pos_map.erase(x);
        }
    }

    for (int val : l) cout << val << ' ';
    cout << endl;
    return 0;
}
