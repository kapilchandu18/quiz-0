class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        if (matrix.empty() || matrix[0].empty())
        return 0;
        int rows = matrix.size();
        int columns = matrix[0].size();
        vector<int> left(columns, 0);
        vector<int> right(columns, columns);
        vector<int> height(columns, 0);
        int Area = 0;
        for (int i = 0; i < rows; i++) {
            int curLeft = 0, curRight = columns;
            for (int j = 0; j < columns; j++) {
                if (matrix[i][j] == '1') height[j]++;
                else height[j] = 0;
            }
            for (int j = 0; j < columns; ++j) {
                if (matrix[i][j] == '1') {
                    left[j] = max(left[j], curLeft);
                } else {
                    left[j] = 0;
                    curLeft = j + 1;
                } }      
            for (int j = columns - 1; j >= 0; --j) {
                if (matrix[i][j] == '1') {
                    right[j] = min(right[j], curRight);
                } else {
                    right[j] = columns;
                    curRight = j;
                } }
            for (int j = 0; j < columns; ++j) {
                Area = max(Area, (right[j] - left[j]) * height[j]);
            } }
        return Area;
    }
