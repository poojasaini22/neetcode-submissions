class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        int top=0;
        int bot=matrix.size()-1;
        while(top<=bot){
            int row =top+((bot-top)/2);
            if(matrix[row][cols-1]<target){
                top=row+1;
            }
            else if(matrix[row][0]>target){
                bot=row-1;
            }
            else {
                break;
            }
        }
        if(top<=bot==false){
            return false;
        }
        int l=0;
        int r=cols-1;
        int row =top+((bot-top)/2);
        while(l<=r){
            int m=l+((r-l)/2);
            if(matrix[row][m]>target){
                r=m-1;
            }
            else if (matrix[row][m]<target){
                l=m+1;
            }
            else {
                return true;
            }
        }
        return false;
    }
};
