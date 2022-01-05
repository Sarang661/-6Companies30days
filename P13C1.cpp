class Solution {
public:
    string decodeString(string s) {
        int n =s.length();
        stack<int>st;
        stack<string>nm;
        string res="";
        int d=0;
        string ans="";
     
        for(int i=0;i<n;i++){
            if(isdigit(s[i])){
                d=d*10+(s[i]-'0');
            }
            else if(s[i]=='['){
                st.push(d);
                nm.push(ans);
                d=0;
                ans="";
            }
            else if(s[i]==']'){
                res=nm.top();
                nm.pop();
                int h=st.top();
                st.pop();
                while(h--){
                        res=res+ans;
                }
                ans=res;
            }
            else{
                ans+=s[i];
            }
        }
        return ans;
    }
};