//https://leetcode.com/problems/spiral-matrix/

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row= matrix.size();
        int col=matrix[0].size();
        int count=0;
        int total=row*col;
        int srow=0;
        int erow=row-1;
        int scol=0;
        int ecol=col-1;
        vector<int> ans;
        while(count<total){
            for(int i=scol;i<=ecol && count<total;i++){
                ans.push_back(matrix[srow][i]);
                count++;

            }
            srow++;
            
            for(int i=srow;i<=erow && count<total;i++){
                ans.push_back(matrix[i][ecol]);
                count++;
            }
            ecol--;
            for(int i=ecol;i>=scol && count<total;i--){
                ans.push_back(matrix[erow][i]);
                count++;

            }
            erow--;
            for(int i=erow;i>=srow && count<total;i--){
                ans.push_back(matrix[i][scol]);
                count++;
            }
            scol++;
            

        }
        return ans;
        
    }
    
};