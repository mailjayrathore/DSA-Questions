class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       
        int n = matrix.size();        // Number of rows
        int m = matrix[0].size();     // Number of columns

        vector<int> row(n, 0);
        vector<int> col(m, 0);

        // Step 1: Mark the rows and columns which contain 0
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }

            }
        }

        // Step 2: Set elements to 0 if their row or column is marked
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (row[i] || col[j]) {
                    matrix[i][j] = 0;
                }

            }
        }
    }
};
    