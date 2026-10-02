class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        const int n = matrix.size();
        const int m = matrix[0].size();
        int start = 0, end = m*n-1, mid, ln, col;
        while(start <= end){
            mid = (start + end) / 2;
            col = mid % m;
            ln = mid / m;
            if(matrix[ln][col] == target) return true;
            else if(matrix[ln][col] < target) start = mid + 1;
            else end = mid - 1;
        }
        return false;
    }
};
