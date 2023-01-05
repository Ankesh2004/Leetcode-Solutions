class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0){
            return false;
        }

        else{
            vector<int> num;
            while(x>=1){
                num.push_back(x%10);
                x=x/10;

            }

            int n= num.size();
            int s=0;
            int e=n-1;
            int count=0;
            int req_count;

            if(n%2==0){
                req_count=n/2;
            }
            else{
                req_count=n/2+1;

            }

            while(s<=e){
                if(num[s]==num[e]){
                    count++;
                }
                s++;
                e--;
            }

            if(count==req_count){
                return true;
            }
            else{
                return false;
            }

            
        }
        
    }
};
