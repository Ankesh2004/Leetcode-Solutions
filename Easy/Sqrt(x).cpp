class Solution {
public:
    int mySqrt(int x) {

        long long sqr=1;

        while((sqr*sqr)<=x){
                sqr++;
            
        }
        long long ans=sqr-1;
        return ans;
        
    }
};
