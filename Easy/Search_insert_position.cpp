class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
int n= nums.size();
int ans;
        for(int i=0;i<n;i++){
            if(nums.at(i)==target){
                ans=i;
                break;
            }

            else if(nums.at(i)>target){
                ans=i;
                break;
            }

        }
        return ans;
    }
};