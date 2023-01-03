class Solution {
public:
int a,b,c;
    vector<int> twoSum(vector<int>& nums, int target) {

        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){


                if(nums[i]+nums[j]==target){
                    a=i;
                    b=j;
                    c++;
                    break;

                }
            }
            if(c>0){
                break;
            }

        }

        return {a,b};

    }
};