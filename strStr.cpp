class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size(), m=needle.size();
        if(m==0)
            return 0;
        for(int i=0; i<n-m+1; i++) {
            if(haystack[i]==needle[0]) {
                int j=i+1, k=1;
                while(k<m) {
                    if(haystack[j]==needle[k])
                        k++, j++;
                    else break;
                }
                if(k==m)
                    return i;
            }
        }
        return -1;
    }
};
