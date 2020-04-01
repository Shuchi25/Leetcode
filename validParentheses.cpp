class Solution {
public:
    bool isValid(string s) {
        int size=s.size();
        stack <char>st;
        for(int i=0; i<size; i++) {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
               st.push(s[i]);
            else {
                if(st.empty())
                    return false;
                char c=st.top();
                st.pop();
                if(s[i]==')' && c!='(')
                    return false;
                else if(s[i]=='}' && c!='{')
                    return false;
                else if(s[i]==']' && c!='[')
                    return false;
            }
        }
        if(st.empty())
            return true;
        return false;
    }
};
