// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int i=1;
        while(!isBadVersion(i)){
            i++;
        }

        return i;
        
    }
};