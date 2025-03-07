class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n, vector<int>(n)); // 直接初始化 n×n 矩陣

        int num = 1, row = 0, col = 0;
        int dx[4] = {0, 1, 0, -1}; // 右, 下, 左, 上
        int dy[4] = {1, 0, -1, 0};
        int dir = 0; // 初始方向是向右

        while (num <= n * n) {
            ans[row][col] = num++;

            // 預測下一個位置
            int nextRow = row + dx[dir];
            int nextCol = col + dy[dir];

            // 若超出範圍或遇到已填入的位置，則轉向
            if (nextRow < 0 || nextRow >= n || nextCol < 0 || nextCol >= n || ans[nextRow][nextCol] != 0) {
                dir = (dir + 1) % 4; // 方向變化
                nextRow = row + dx[dir];
                nextCol = col + dy[dir];
            }

            row = nextRow;
            col = nextCol;
        }

        return ans;
    }
};
