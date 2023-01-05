class Solution {
public:
    vector<int> getRow(int rowIndex) {
        int r=rowIndex;
        vector<vector<int>> pascal;

    for(int i=0;i<=r;i++){
        pascal.push_back(vector<int>());  // Add a new row to the 2D vector

        for(int j=0;j<=i;j++){
            long long a;
            if(j==0|| i==0){
                a=1;
                
            }
            else{
                a=(a*(i-j+1))/j;
            }
            pascal[i].push_back(a);
        }
     
    }

   return pascal[r];
  
    }
};
