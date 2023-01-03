class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        if (digits[n - 1] != 9) {
            digits[n - 1] += 1;
            return digits;
        }

        int i = n - 1;
        while (i >= 0 && digits[i] == 9) {
            digits[i] = 0;
            i--;
        }
        if (i < 0) {
            digits[0] = 1;
            digits.push_back(0);
        } else {
            digits[i] += 1;
        }
        return digits;
    }
};
