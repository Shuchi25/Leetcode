class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        int i=n-1;
        while(i>=0) {
            if(digits[i]<9) {
                digits[i]=digits[i]+1;
                return digits;
            } else {
                digits[i]=0;
            }
            i--;
        }
        if(n==0 || digits[0]==0)
            digits.insert(digits.begin(), 1);
        return digits;
    }
};
