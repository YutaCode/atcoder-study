#include <iostream>
#include <vector>

using namespace std;

const int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
const int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 };

// グループごとにセンサーを探す再帰関数
void findConnectedSensors(vector<string>& grid, int x, int y) {
    if (x < 0 || x >= grid.size() || y < 0 || y >= grid[0].size() || grid[x][y] != '#')
        return;

    grid[x][y] = '.';

    for (int d = 0; d < 8; ++d) {
        int nx = x + dx[d];
        int ny = y + dy[d];
        findConnectedSensors(grid, nx, ny);
    }
}

int main() {
    int H, W;
    cin >> H >> W;
    vector<string> grid(H);

    for (int i = 0; i < H; ++i) {
        cin >> grid[i];
    }

    int groupCount = 0; // グループの数

    for (int i = 0; i < H; ++i) {
        for (int j = 0; j < W; ++j) {
            if (grid[i][j] == '#') {
                findConnectedSensors(grid, i, j);
                groupCount++;
            }
        }
    }

    cout << groupCount << endl;

    return 0;
}
