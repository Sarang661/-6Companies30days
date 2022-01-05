 string printMinNumberForPattern(string S){
        stack<int>st;
        string ans="";
        int n =S.length();
        int num=1;
        for(int i=0;i<n;i++){
            if(S[i]=='D'){
                st.push(num);
                num++;
            }
            
            else if(S[i]=='I'){
                st.push(num);
                num++;
                while(st.empty()==false){
                    ans+=to_string(st.top());
                    st.pop();
                }
            }
      
        }
         st.push(num);
           while(st.empty()==false){
                    ans+=to_string(st.top());
                    st.pop();
                }
        return ans;
    }