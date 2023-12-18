#include <iostream>
#include <vector>

using namespace std;

// 递归函数，根据题目描述进行赦免或处罚
void processCheaters(vector<vector<int>>& matrix, int row, int col, int size) {
    if (size == 1) {
        return;  // 已经是最小的矩阵，无法再分
    }

    int half = size / 2;

    // 处理左上角的矩阵
    processCheaters(matrix, row, col, half);

    // 处理右上角的矩阵
    processCheaters(matrix, row, col + half, half);

    // 处理左下角的矩阵
    processCheaters(matrix, row + half, col, half);

    // 处理右下角的矩阵
    processCheaters(matrix, row + half, col + half, half);

    // 如果左上角的矩阵中没有被赦免的作弊者，则将右上、左下、右下的矩阵中的作弊者处罚
    if (matrix[row][col] == 1) {
        for (int i = row; i < row + size; ++i) {
            for (int j = col; j < col + size; ++j) {
                matrix[i][j] = 1;
            }
        }
    }
}

int main() {
    int n;
    cin >> n;

    int size = 1 << n;  // 计算矩阵的大小

    // 初始化矩阵
    vector<vector<int>> matrix(size, vector<int>(size));

    // 处理矩阵
    processCheaters(matrix, 0, 0, size);

    // 输出结果
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
