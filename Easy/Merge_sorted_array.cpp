class Solution {
    vector<int> ans;
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0;
        int j=0;

        if(n>0 && m>0){

        while(i<m &&j<n){

            if(nums1.at(i)<nums2.at(j)){
                ans.push_back(nums1[i]);
                i++;
                
            }
            else if(nums1.at(i)>=nums2.at(j)){
                ans.push_back(nums2[j]);
                j++;
                
            }
        }

          if(i==m && j!=n){
                for(;j<n;j++){
                    ans.push_back(nums2.at(j));
                }
            }
            if(j==n && i!=m){
                for(;i<m;i++){
                    ans.push_back(nums1.at(i));
                }
            }

        nums1=ans;
        }

        else if(m>0 && n<=0){
        }
        else{
            nums1= nums2;
        }
    }
};