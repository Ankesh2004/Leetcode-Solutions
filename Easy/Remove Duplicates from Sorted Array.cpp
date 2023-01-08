class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n= nums.size();  // n is size of vector
        int k=0;

        for(int i=1;i<n;i++){

            if(nums[i]!=nums[i-1]){
                 k++;
                nums[k]=nums[i];
                
            }

        }
            nums.resize(k+1);    //To remove all absurd elements left after putting all distinct elements

            return k+1;
    
        
    }
};
