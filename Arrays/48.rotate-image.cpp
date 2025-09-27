/*
 * @lc app=leetcode id=48 lang=cpp
 *
 * [48] Rotate Image
 */

// @lc code=start
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0 ; i < n ; i++) {
            for(int j = i ; j < m ; j++) {
               int temp = matrix[i][j];
               matrix[i][j] = matrix[j][i];
               matrix[j][i] = temp;
            }
        }

        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < n/2 ; j++) {
                int temp = matrix[i][j];
                matrix[i][j] = matrix[i][m-1-j];
                matrix[i][m-1-j] = temp;  
            }
        }
    }
};
// @lc code=end

