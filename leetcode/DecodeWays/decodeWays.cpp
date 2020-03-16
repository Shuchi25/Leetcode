class Solution {
public:
    int numDecodings(string s) {
        if(s.size()==0)
            return 0;
        int size = s.size();
	    int dp[size];
        if(s[size-1]=='0')
            dp[size-1]=0;
        else dp[size-1]=1;
        if(size>=2) {
            if(s[size-2]=='0')
                dp[size-2]=0;
            else if((s[size-2]=='1') || (s[size-2]=='2' && s[size-1]<='6'))
                dp[size-2]=dp[size-1]+1;
            else dp[size-2]=dp[size-1];
        }
        for(int i=s.size()-3; i>=0; i--) {
            if(s[i]=='0') {
                dp[i]=0;
            }
            else if((s[i]=='1') || (s[i]=='2' && s[i+1]<='6')) {
                dp[i]=dp[i+1]+dp[i+2];
	        }
            else {
                dp[i]=dp[i+1];
            }
        }
        return dp[0];
    }
};