class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int occur=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                occur++;
            }
        }
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int ans= nums.size()-occur;
        int x=n;
        int i=0;
        while(occur){
            if(nums[i]==val){
                swap(nums[i],nums[x]);
                x--;
                occur--;
            }
            i++;
        }
        
        return ans;
    }
};
