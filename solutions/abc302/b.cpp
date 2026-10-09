#include <iostream>
#include <vector>
using namespace std;

int dx[8] = {1, 0, -1, 0, 1, 1, -1, -1};
int dy[8] = {0, 1, 0, -1, 1, -1, 1, -1};

bool searchPattern(int x, int y, const vector<string>& grid, int h, int w, vector<pair<int, int>>& positions) {
    string pattern = "snuke";
    for (int dir = 0; dir < 8; ++dir) {
        bool found = true;
        positions.clear();
        for (int i = 0; i < 5; ++i) {
            int nx = x + i * dx[dir];
            int ny = y + i * dy[dir];
            if (nx < 0 || nx >= h || ny < 0 || ny >= w || grid[nx][ny] != pattern[i]) {
                found = false;
                break;
            }
            positions.push_back({nx + 1, ny + 1});
        }
        if (found) return true;
    }
    return false;
}

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> grid(h);
    for (int i = 0; i < h; ++i) {
        cin >> grid[i];
    }

    vector<pair<int, int>> positions;
    for (int i = 0; i < h; ++i) {
        for (int j = 0; j < w; ++j) {
            if (searchPattern(i, j, grid, h, w, positions)) {
                for (auto& pos : positions) {
                    cout << pos.first << " " << pos.second << endl;
                }
                return 0;
            }
        }
    }
}
