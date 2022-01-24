class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();   //no of rows
        int m=matrix[0].size();   //no of columns
        int row=0,col=m-1;
        
        while(row>=0 && row<n && col>=0 && col<m)
        {   
            if(matrix[row][col]==target)
                return true;   
            else if(matrix[row][col] > target )
               col--;   
            else if(matrix[row][col] < target )
                row++; 
        }
        return false;
    }
};
