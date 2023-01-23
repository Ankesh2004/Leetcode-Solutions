//Answer 1: O(n) time complexicity
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        
        int count=0;
        int s;
        vector <int> ans;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                if(count==0){
                s=i;
                }
                count++;
            }

        }
        if(count>0){
        ans.push_back(s);
        ans.push_back(s+count-1);
        }
        else{
            ans.push_back(-1);
            ans.push_back(-1);
        }

        return ans;
        
    }
};

//Answer 2: O(log n) complexcity
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector <int> ans;
        int left = 0;
        int right = nums.size() - 1;
        int firstOccur = -1;
        int lastOccur = -1;

        // Find the first occurrence of target using binary search
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] >= target) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
            if (nums[mid] == target) firstOccur = mid;
        }

        // If target not found, return [-1, -1]
        if (firstOccur == -1) {
            ans.push_back(-1);
            ans.push_back(-1);
            return ans;
        }

        // Find the last occurrence of target using binary search
        left = 0;
        right = nums.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] <= target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
            if (nums[mid] == target) lastOccur = mid;
        }

        ans.push_back(firstOccur);
        ans.push_back(lastOccur);
        return ans;
    }
};
