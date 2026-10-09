#include <iostream>
#include <vector>
#include <set>

bool check_sudoku(std::vector<std::vector<int>>& A) {
    // 行ごとのチェック
    for (int i = 0; i < 9; i++) {
        std::set<int> row_set;
        int row_sum = 0;
        for (int j = 0; j < 9; j++) {
            if (row_set.count(A[i][j]) || A[i][j] < 1 || A[i][j] > 9) {
                return false;
            }
            row_set.insert(A[i][j]);
            row_sum += A[i][j];
        }
        if (row_set.size() != 9 || row_sum != 45) {
            return false;
        }
    }

    // 列ごとのチェック
    for (int j = 0; j < 9; j++) {
        std::set<int> col_set;
        int col_sum = 0;
        for (int i = 0; i < 9; i++) {
            if (col_set.count(A[i][j])) {
                return false;
            }
            col_set.insert(A[i][j]);
            col_sum += A[i][j];
        }
        if (col_set.size() != 9 || col_sum != 45) {
            return false;
        }
    }

    // 3x3のブロックごとのチェック
    for (int block_row = 0; block_row < 9; block_row += 3) {
        for (int block_col = 0; block_col < 9; block_col += 3) {
            std::set<int> block_set;
            int block_sum = 0;
            for (int i = block_row; i < block_row + 3; i++) {
                for (int j = block_col; j < block_col + 3; j++) {
                    if (block_set.count(A[i][j])) {
                        return false;
                    }
                    block_set.insert(A[i][j]);
                    block_sum += A[i][j];
                }
            }
            if (block_set.size() != 9 || block_sum != 45) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    std::vector<std::vector<int>> A(9, std::vector<int>(9));

    // 9x9のマス目Aを入力として受け取る
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            std::cin >> A[i][j];
        }
    }

    bool result = check_sudoku(A);
    if (result) {
        std::cout << "Yes" << std::endl;
    } else {
        std::cout << "No" << std::endl;
    }

    return 0;
}
