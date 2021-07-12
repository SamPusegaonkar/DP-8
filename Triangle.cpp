/* Can be done in bottom up approach */

//Time Complexity: O(N), N = all numbers in the triangle
//Space Complexity: O(1)

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
        
        int rows = triangle.size();
        
        for ( int i = rows -2; i >=0 ; i--){
            
            for ( int j = 0; j < triangle[i].size() ; j++){
                
                triangle[i][j] = triangle[i][j] + min(triangle[i+1][j] , triangle[i+1][j+1]);
                
            }

        }
        
        
        
        
        return triangle[0][0];
    }
};