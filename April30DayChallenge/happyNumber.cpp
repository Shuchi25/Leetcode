class Solution {
public:
    bool isHappy(int n) {
        set <int> s;
        while(n!=1) {
            s.insert(n);
            int no=sumOfDigits(n);
            if(s.find(no)!=s.end())
                return false;
            n=no;
        }
        return true;
    }
    
    int sumOfDigits(int num) {
        int ans=0;
        while(num!=0) {
            int a = num%10;
            ans+=a*a;
            num=num/10;
        }
        return ans;
    }
};
