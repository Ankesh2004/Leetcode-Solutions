//This answer is right , but complexity is O(n^2) and we get TLE

class Solution {
public:
    int maxArea(vector<int>& height) {

        vector<int> storages;
        int n= height.size();

        int max=-1;

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int s;
                if(height[i]<=height[j]){
                     s=(min(height[j],height[i])*(abs(j-i)));;
                }

                if(s>max){
                    max=s;
                }

            }
        }

        return max;

        
    }
};

// A more efficient approach
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int l=0;
        int r=n-1;   //Creating pointers l & r
        int max_area=-1;

        while(l<r){
            int new_area= min(height[l],height[r])*(r-l);

            if(new_area>max_area){
                max_area= new_area;
            }

            if(height[l]<height[r]){
                l++;

            }
            else{
                r--;
            }
        }

        return max_area;
    }
};