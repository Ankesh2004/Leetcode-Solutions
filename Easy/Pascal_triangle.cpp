class Solution {
public:
   
  vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer(numRows);
        for(int i=0;i<numRows;i++)
        {
            answer[i].resize(i+1);
            for(int j=0;j<=i;j++)
            {
                if(j==0 or j==i)
                    answer[i][j]=1;
                else
                    answer[i][j]=answer[i-1][j-1]+answer[i-1][j];
            }
        }
        return answer;
  }
    
};