class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int i=0;
        int p=0;
        while(i<n && nums[i]!=val)
            i++;
        if(i==n)
            return n;
        else p=i;
        for(; i<n; i++) {
            if(nums[i]==val) {
                continue;
            } else {
                nums[p]=nums[i];
                p++;
            }
        }
        return p;
    }
};
